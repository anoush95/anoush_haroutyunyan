#include <iostream>
using namespace std;

int main ()
{
	long int arr[10];
	int x, number1, number2, arrNum;

	number1 = 1, number2 = 2;
	for (int i = 0; i < 25; i++)
	{
		x = (number1 * number1) + (number2 * number2);
		
		number1++; number2++;		
		{
			if(x % 5 == 0)
				{
					arrNum = x;
				 	arr[i] = arrNum;
					cout << arr[i] << " ";			
				}

		}
	}
	cout << endl;
	
return 0;
}
