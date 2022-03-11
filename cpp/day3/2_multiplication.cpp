#include <iostream>
using namespace std;

void mult(int number)
{		
	int i = 1;
	while (i <= 10)
	{
		cout << number << "x" << i << "=" << number * i << endl;
		i++;
	}
}
int main () 
{
        int number;
        cout << "number: ";
        cin >> number;
        mult(number);

return 0;
}

