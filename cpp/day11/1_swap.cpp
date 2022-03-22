#include <iostream>
#include <string>
using namespace std;
int main ()
{
        string number;
        int p1, p2, temp;
        cout << "Input the number: ";
	{
        	cin >> number;
		cout << endl;
	}
        cout << "Input positions to swap: ";
	{
		cin >> p1 >> p2;
		cout << endl;
	}
	if (p1 > number.length() || p2 > number.length())
	{
		cout << "Invalid input" << endl;
	}
	else
	{
        	temp = number[p1 - 1];
        	number[p1 - 1] = number[p2 - 1];
        	number[p2 - 1] = temp;
		cout << "Output: " << number << endl;
	}
return 0;
}

