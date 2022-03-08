#include <iostream>
using namespace std;

void fact(int number, int factorial, int i)
{
	while (i <= number)
        {
                factorial = factorial * i;
                i++;
        }

        cout << "The factorial of " << number << " is " << factorial << endl;
}
int main() 
{
        int number;
        int factorial = 1;
        int i = 1;

        cout << "number: ";
        cin >> number;

        fact(number, factorial, i);

return 0;
}

