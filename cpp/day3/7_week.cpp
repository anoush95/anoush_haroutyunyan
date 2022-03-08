#include <iostream>
using namespace std;

void day_name(int day)
{		
	cout << "Input week number(1-7): ";
	cin >> day;
	
	switch (day) 
	{
		case 1:
			cout << "Monday" << endl;
			break;
		case 2:
			cout << "Tuesday" << endl;
			break;
		case 3:
			cout << "Wednesday" << endl;
			break;
		case 4:
			cout << "Thursday" << endl;
			break;
		case 5:
			cout << "Friday" << endl;
			break;
		case 6:
			cout << "Saturday" << endl;
			break;
		case 7:
			cout << "Sunday" << endl;
			break;
		default:
			cout << "Error: input week number(1-7): " << endl;	
	}
}
int main ()

{	int day;
	day_name(day);

	return 0;
}
