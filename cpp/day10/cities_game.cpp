#include <iostream>
#include <string>

using namespace std;

int main() 
{
	int start;
	string cities [91] = {"Shoushi", "Stepanakert", "Hadrut", "Yerevan", "Goris", "Armavir", "Martuni", "Moscow", "London", "Paris","Rome", "Budapest", "Vienna", "Barcelona", "Stockholm", "Copenhagen", "Samara", "Kazan", "Donetsk", "Volgograd", "Odessa", "Perm", "Naples", "Liverpool", "Riga", "Amsterdam", "Zagreb", "Krasnodar", "Krasnodar", "Krasnodar", "Essen", "Genoa", "Oslo", "Duesseldorf", "Goeteborg", "Goeteborg", "Lipetsk", "Hannover", "Astrakhan", "Skopje", "Leeds", "Cardiff", "Wandsbek", "Tallinn", "Florence", "Alicante", "Galati", "Bari", "Nis", "Altona", "Yakutsk", "Northampton", "Novi Sad", "Padova", "Cork", "Hamm", "Amadora", "Ipswich", "Oxford", "Albacete", "Neukoelln", "Warrington", "Zenica", "New York", "Los Angeles", "Phoenix", "Houston", "Banff", "Edmonton", "Jasper", "Delta", "Penticton", "Quesnel", "Trail", "West Vancouver", "Churchill", "Gander", "Inuvik", "Pictou", "North Bay", "Ottawa", "Laval", "Magog", "Magog", "Flin Flon", "Saskatoon","Solo", "Karak", "Samarkand", "Lichinga"};
	cout << "To start the game press 1.\t For computer to start the game press 0: ";
	cin >> start;
	int i = 0;
    	if (start == 1) 
	{
		char check_letter;
		string city;
		cout << "Input the name of city: ";
		int k = 0;
		for (i = 0; i < 90; i++) 
		{	
			cin >> city;
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
			while (j < 90 ) 
			{
				if (city[city.size() - 1] != cities[j][0]) 
				{
					check++;
				}
				if (check == 90) 
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
	if (start == 0) 
	{
		char check_letter;
		string city;
		int j = 0;
		cout << cities[0];
		check_letter = cities[0].back();
		cities[0] = "1";	
		for (i = 0; i < 90; i++) 
		{
            		cin >> city;
			if (city[0] != check_letter) 
			{
                		cout << "Game over\n";
				return 0;
           		}
			if( city[city.size() -1] >= 'a' && city[city.size() -1] <= 'z') 
			{
				city[city.size() -1] = city[city.size() -1] - ('a' - 'A');
			}
            		int j = 0;
			int check = 0;
			while (j < 90 ) 
			{
				if (city[city.size() - 1] != cities[j][0]) 
				{
                    			check++;
                		}   
                		if (check == 90) 
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
