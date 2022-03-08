#include <iostream>
using namespace std;

void mult(int i, int number)
{		
	while (i <= 10)
	{
		cout << number << "x" << i << "=" << number * i << endl;
		i++;
	
	}
	
}

int main () 
{
	int i = 1;
        int number;

        cout << "number: ";
        cin >> number;
	
        mult(i, number);

return 0;
}

