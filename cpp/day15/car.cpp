#include <iostream>
#include <fstream>

using namespace std;

struct Car
{
	string brand;
	string model;
	int price;
	int mileage;
	int engine;
	string gearbox;
	string colour;

	void print()
        {	
		cout << "===============================" << endl;
                cout << "Car brand | " << brand << endl;
		cout << "-------------------------------" << endl;
		cout << "model     | " << model << endl;
		cout << "-------------------------------" << endl;
                cout << "price 	  | " << price << endl;
		cout << "-------------------------------" << endl;
                cout << "mileage   | " << mileage << endl;
		cout << "-------------------------------" << endl;
                cout << "engine    | " << engine << endl;
		cout << "-------------------------------" << endl;
		cout << "gearbox   | " << gearbox << endl;
		cout << "-------------------------------" << endl;
                cout << "colour    | " << colour << endl;
		cout << "===============================" << endl;
        }

};
int main ()
{
	const int n = 10;
	Car car [n];
	ifstream ifcar ("car.txt");
	string fcars;
	int i = 0;
	int line = 0;
	string line_words[7];
	while (ifcar >> fcars)
	{
		line_words[i] = fcars;
		i++;
		if (i == 7)
		{
			for (int j = 0; j < 6; j++)
			{
				line_words[j].pop_back();
			}	
			car[line].brand = line_words[0];
			car[line].model = line_words[1];
			car[line].price = atoi(line_words[2].c_str());
			car[line].mileage = atoi(line_words[3].c_str());
			car[line].engine = atoi(line_words[4].c_str());
			car[line].gearbox = line_words[5];
			car[line].colour = line_words[6];
			i = 0;
			line++;
		}
	}
	ifcar.close ();
	string filter, str_filter;
	int number, x = 0;
	cout << "Choose the number of filters: ";
	cin >>  number;
	if (number > 7 || number < 1)
	{
		cout << "Invalid input\n";
		return 0;
	}
	cout << "Choose " << number << " filters (brand, model, price, mileage, engine, gearbox, colour): ";
	cin.ignore();
	getline (cin, filter);
	cout << "Input " << filter << " filters ";
        getline (cin, str_filter);	
	string str [number];
	for (int i = 0; str_filter[i] != '\0'; i++)
        {
                if (str_filter[i] == ' ')
                {
                        x++;
                        continue;
                }
               	str[x] += str_filter[i];
	}
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		for(int j = 0; j < number; j++)
		{
			if (car[i].brand == str[j] || car[i].model == str[j] || car[i].price == atoi(str[j].c_str()) || car[i].mileage == atoi(str[j].c_str()) || car[i].engine == atof(str[j].c_str()) || car[i].gearbox == str[j] || car[i].colour == str[j])
			{
				k++;
			}
		       	if( k == number)
		       	{
				car[i].print();
			       
		       	}
		}
		k = 0;
	}
		

return 0;
}
