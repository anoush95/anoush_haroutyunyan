#include <iostream>
#include <string>

using namespace std;

int main() 
{
	string start;
	string cities [50] = {"Shoushi", "Stepanakert", "Hadrut", "Yerevan", "Goris", "Armavir", "Moscow", "London", "Paris","Rome", "Budapest", "Vienna", "Barcelona", "Stockholm", "Liverpool", "Riga", "Amsterdam", "Zagreb", "Oslo", "Goeteborg", "Hannover", "Astrakhan", "Skopje", "Leeds", "Cardiff", "Tallinn", "Florence", "Nis", "Altona", "Northampton", "Hamm", "Amadora", "Ipswich", "Oxford", "Albacete", "New York", "Los Angeles", "Phoenix", "Houston",  "Edmonton", "Jasper", "Delta", "Penticton", "Quesnel", " Vancouver", "Churchill", "Ottawa", "Solo" "Samarkan", "Lichinga"};
	cout << "Who starts the game? You or me? ";
	cin >> start;
	int i = 0;
	const int n = 50;
    	if (start == "me") 
	{
		char check_letter;
		string city;
		cout << "Input the name of city: ";
		int k = 0;
		for (i = 0; i < n; i++) 
		{	
			cin >> city;
			if (city[0] >= 'A' && city[0] <= 'Z')
			{
				city[0] = city[0] + ('a' - 'A');
			}
			if ((city[0] != check_letter) && (k > 0)) 
			{
				cout << "Game over\n";
				return 0;
			}
			if (city[city.size() -1] >= 'a' && city[city.size() -1] <= 'z') 
			{
				city[city.size() -1] = city[city.size() -1] - ('a' - 'A');
			}
			int j = 0;
			int check = 0;
			while (j < n ) 
			{
				if (city[city.size() - 1] != cities[j][0]) 
				{
					check++;
				}
				if (check == n) 
				{
					cout << "You won!\n";
					return 0;
				}
				if (city[city.size() - 1] == cities[j][0]) 
				{
					cout << cities[j] << endl;
					check_letter= cities[j].back();
					cities[j] = "1";
					k++;
					break;
   				}
				j++;
			}
		}
	} 
	if (start == "You") 
	{
		char check_letter;
		string city;
		int j = 0;
		cout << cities[0];
		check_letter = cities[0].back();
		cities[0] = "1";	
		for (i = 0; i < n; i++) 
		{
            		cin >> city;
			if (city[0] >= 'A' && city[0] <= 'Z')
                        {
                                city[0] = city[0] + ('a' - 'A');
                        }
			if (city[0] != check_letter) 
			{
                		cout << "Game over\n";
				return 0;
           		}
			if (city[city.size() -1] >= 'a' && city[city.size() -1] <= 'z') 
			{
				city[city.size() -1] = city[city.size() -1] - ('a' - 'A');
			}
            		int j = 0;
			int check = 0;
			while (j < n ) 
			{
				if (city[city.size() - 1] != cities[j][0]) 
				{
                    			check++;
                		}   
                		if (check == n) 
				{
                    			cout << "You won!\n";
                    			return 0;
				}
                		if (city[city.size() - 1] == cities[j][0]) 
				{
                    			cout << cities[j] << endl;
					check_letter= cities[j].back();
                    			cities[j] = "1";
                    			break;
                 		}
				j++;
           	 	}
        	}
	}	
return 0;
}
