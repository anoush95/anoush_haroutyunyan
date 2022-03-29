#include <iostream>
#include <fstream>

using namespace std;

struct Car
{
	string brand;
	int price;
	int mileage;
	float engine;
	string gearbox;
	string colour;

	void print()
        {	
		cout << "===============================" << endl;
                cout << "Car brand | " << brand << endl;
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
	string line_words[6];
	while (ifcar >> fcars)
	{
		line_words[i] = fcars;
		i++;
		if (i == 6)
		{
			for (int j = 0; j < 5; j++)
			{
				line_words[j].pop_back();
			}
			car[line].brand = line_words[0];
			car[line].price = atoi(line_words[1].c_str());
			car[line].mileage = atoi(line_words[2].c_str());
			car[line].engine = atof(line_words[3].c_str());
			car[line].gearbox = line_words[4];
			car[line].colour = line_words[5];
			i = 0;
			line++;
		}
	}
	ifcar.close ();
	string filter, str_filter;
	float float_filter;
	int min, max;
	cout << "Choose a filter (brand, price, mileage, engine, gearbox, colour): ";
	cin >> filter;
	if (filter == "brand" || filter == "gearbox" || filter == "colour")
	{
		cout << "Input " << filter << ": ";
		cin >> str_filter;
	}
	if (filter == "mileage" || filter == "engine")
	{
		cout << "Input " << filter << ": ";
		cin >> float_filter;
	}
	if (filter == "price")
	{
		cout << "min price: ";
		cin >> min;
		cout << "max price: ";
		cin >> max;
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		if (car[i].brand == str_filter || car[i].mileage == float_filter || car[i].engine == float_filter || car[i].gearbox == str_filter || car[i].colour == str_filter)
		{
			car[i].print();
			
		}
		if (filter == "price")
		{
			if (car[i].price >= min && car[i].price <= max)
			{
				car[i].print();
				
			}
		}	
	
	}	

return 0;
}
