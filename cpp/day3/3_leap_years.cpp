#include <iostream>
using namespace std;

void result(int year)
{	
	int leap = 0;
	while (leap < 20)
        {
                if (year % 4 == 0)
                {
                        cout << year <<endl;
                        leap ++;
                }
        year ++;
	}

}
int main() 
{
        int year;
        cout << "year: ";
        cin >> year;
        cout << endl;
	result (year);
	
return 0;
}

