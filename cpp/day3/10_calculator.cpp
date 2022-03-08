#include <iostream>
using namespace std;

void result (float number1, float number2, char oper)
	
{
	if(oper == '+')
	{
		cout << number1 << " + " << number2 << " = " << number1 + number2 << endl;
        	
		
        }
        else if(oper == '-')
        {
                
		cout << number1 << " - " << number2 << " = " << number1 - number2 << endl;
			
		
        }
        else if(oper == '*')
        {
                
		cout << number1 << " * " << number2 << " = " << number1 * number2 << endl;
			
		
        }
        else if(oper == '/')
        {
        	if (number2 == 0)
                {
                	
			cout << "Error: invalid input" << endl;
			return;
			
                }

                
		cout << number1 << " / " << number2 << " = " << number1 / number2 << endl;
			
	}	
	else
        {	
                cout << "Error: invalid input" << endl;
		return;	
        }

}


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
	
	result(number1, number2, oper);

	
	
return 0;
}
