#include <iostream>
using namespace std;

void result(int year, int leap)
{
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
        int leap = 0;

        cout << "year: ";
        cin >> year;
        cout << endl;

        result (year, leap);	
return 0;
}

