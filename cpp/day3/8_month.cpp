#include <iostream>
using namespace std;

void months(int month, string days)
{
        cout << "Input month number: ";
        cin >> month;

        switch (month)
        {
                case 1:

                case 3:

                case 5:

                case 7:

                case 8:

                case 10:

                case 12:
                        cout << "Total number of days = 31" << endl;
                        break;
                case 2:
                        cout << "Total number of days = 28/29" << endl;
                        break;
                case 4:

                case 6:

                case 9:

                case 11:
                        cout << "Total number of days = 30" << endl;
                        break;

                default:
                        cout << "Error: input month number: " << endl;
        }
}

int main ()
{
	int month;
	string days;

	months(month, days);

return 0;
}


