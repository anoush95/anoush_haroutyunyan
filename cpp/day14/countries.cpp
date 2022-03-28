#include <iostream>
#include <fstream>
#include <cstring> 
using namespace std;
     
enum PhoneCodes 
{
      	Armenia = 374,
	Russia = 7,
      	France = 33,
	Germany = 49,
	Italy = 39,
	Canada = 1,
	Greece = 30,
	Brazil = 55,
	China  = 86,
	India = 91,
};
     
struct Country 
{
	string country_name;
	string capital;
	string domain;
	int population;
	int area;
	long long GDP;

      	void print() 
	{
        	cout << "Country name : " << country_name << endl;
        	cout << "Capital name : " << capital << endl;
        	cout << "Domain name  : " << domain << endl;
        	cout << "Population   : " << population << endl;
        	cout << "Area         : " << area << endl;
        	cout << "GDP          : " << GDP << endl; 
      	}
};
int main(int argc, char* argv[]) 
{
	Country country[11];
	ifstream fcountry("countries.txt");
      	string line;
      	int i = 0;
      	int pline = 0;
      	string line_words[6];
      	while (fcountry >> line) 
      	{
        	line_words[i] = line;
        	i++;
        	if (i == 6) 
		{
          		for (int j = 0; j < 5; j++) 
			{
            			line_words[j].pop_back();
          		}
			country[pline].country_name = line_words[0];
          		country[pline].capital = line_words[1];
          		country[pline].domain = line_words[2];
          		country[pline].population = atoi(line_words[3].c_str());
          		country[pline].area = atoi(line_words[4].c_str());
          		country[pline].GDP = atoll(line_words[5].c_str());
          		i = 0;
          		pline++;
        	}
      	}
      	fcountry.close();
     	if (strcmp(argv[1], "search") == 0) 
      	{
		string search, choice;
	      	cout << "Input search mode (countryName/capital/domain): ";
	      	cin >> search;
	      	cout << "Input " << search << ":";
	      	cin >> choice;
    		for(int i = 0; i < 11; i++)
   	 	{
    			if(country[i].country_name == choice || country[i].capital == choice || country[i].domain == choice)
			{
				country[i].print();
				if(country[i].country_name == "Armenia")
				{
					cout << "Phone Code " << "  :+" << Armenia << endl;
				}
				if(country[i].country_name == "Russia")
                		{
                        		cout << "Phone Code " << "  :+" << Russia << endl;
                		}
				if(country[i].country_name == "France")
                		{
                        		cout << "Phone Code " << "  :+" << France << endl;
                		}
				if(country[i].country_name == "Germany")
                		{
                        		cout << "Phone Code " << "  :+" << Germany << endl;
                		}
				if(country[i].country_name == "Italy")
               	 		{
                        		cout << "Phone Code " << "  :+" << Italy << endl;
                		}
				if(country[i].country_name == "Canada")
                		{
                        		cout << "Phone Code " << "  :+" << Canada << endl;
                		}
				if(country[i].country_name == "Greece")
                		{	
                        		cout << "Phone Code " << "  :+" << Greece << endl;
                		}
				if(country[i].country_name == "Brazil")
               	 		{
                        		cout << "Phone Code " << "  :+" << Brazil << endl;
                		}
				if(country[i].country_name == "China")
                		{
                        		cout << "Phone Code " << "  :+" << China << endl;
               	 		}
				if(country[i].country_name == "India")
                		{
                        		cout << "Phone Code " << "  :+" << India << endl;
                		}
			}
    		}	
    	} 
      	else if (strcmp(argv[1], "compare") == 0) 
	{
 		string first_country, second_country;
		cout << "Input the first country: ";
		cin >> first_country;
		cout << "Input the second country: ";
		cin >> second_country;
		int x, y;
        	for (int i = 0; i < 11; i++) 
		{
            		if (first_country == country[i].country_name) 
			{
                		x = i;
            		}
            		if (second_country == country[i].country_name) 
			{
                		y = i;
            		}
        	}
		cout << "========================================" << endl;
       	 	cout << "\t\t|" << country[x].country_name << "\t|" << country[y].country_name << endl;
        	cout << "========================================" << endl;
        	cout << "Capital";
        	cout << "\t\t|" << country[x].capital << "\t|" << country[y].capital << endl;
        	cout << "Domain";
        	cout << "\t\t|" << country[x].domain << "\t\t|" << country[y].domain << endl;
		
        	if (country[x].population > country[y].population) 
		{
            		cout << "Population";
                 	cout << "\t|" << country[x].population << "\t> " << country[y].population << endl;
       	 	}	
        	else if (country[x].population < country[y].population) 
		{
            		cout << "Population";
                 	cout << "\t|" << country[x].population << "\t< " << country[y].population << endl;
        	}
        	else 
		{
            		cout << "Population";
                 	cout << "\t|" << country[x].population << "\t= " << country[y].population << endl;
        	}

        	if (country[x].area > country[y].area) 
		{
            		cout << "Area";
                 	cout << "\t\t|" << country[x].area << "\t\t> " << country[y].area << endl;
        	}
        	else if (country[x].area < country[y].area) 
		{
            		cout << "Area";
                 	cout << "\t\t|" << country[x].area << "\t\t< " << country[y].area << endl;
        	}
        	else 
		{
            		cout << "Area";
                 	cout << "\t\t|" << country[x].area << "\t\t= " << country[y].area << endl;
        	}

        	if (country[x].GDP > country[y].GDP) 
		{
            		cout << "GDP";
                 	cout << "\t\t|" << country[x].GDP << "\t> " << country[y].GDP << endl;
        	}
       	 	else if (country[x].GDP < country[y].GDP) 
		{
            		cout << "GDP";
                 	cout << "\t\t|" << country[x].GDP << "\t< " << country[y].GDP << endl;
        	}
        	else 
		{
            		cout << "GDP";
                 	cout << "\t\t|" << country[x].GDP << "\t= " << country[y].GDP << endl;
        	}

	}
    	else 
	{
    	    cout << "Invalid command!\n";
      	}
    
return 0;
    
}
     

