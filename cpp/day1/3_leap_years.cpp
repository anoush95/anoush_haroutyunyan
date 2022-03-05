#include <iostream>
using namespace std;

int main() 
{
        int year;
        int leap = 0;

        cout << "year: ";
        cin >> year;
        cout << endl;

        while (leap < 20) 
	{
        	if (year % 4 == 0) 
		{
                	cout << year <<endl;
                        leap ++;
                }
        year ++;
	}	
return 0;
}

