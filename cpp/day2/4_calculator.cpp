#include <iostream>
using namespace std;

int main ()
{
	float number1;

	float number2;
	
	char oper;

	cout << "Input number 1: ";
	cin >> number1;

	cout << "Input operator: ";
	cin >> oper;

	cout << "Input number 2: ";
	cin >> number2;

	switch (oper)
	{
		case '+':
			cout << number1 << " + " << number2 << " = " << number1 + number2 << endl;
			break;
		case '-':
			cout << number1 << " - " << number2 << " = " << number1 - number2 << endl;
			break;
		case '*':
			cout << number1 << " * " << number2 << " = " << number1 * number2 << endl;
			break;
		case '/':
			cout << number1 << " / " << number2 << " = " << number1 / number2 << endl;
			break;
		default:
			cout << "Error: invalid input" << endl;
			break;
	}
	return 0;
}
