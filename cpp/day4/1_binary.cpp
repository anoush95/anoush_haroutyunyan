#include <iostream>
using namespace std;
void binary(int number);

int main()
{
	int number;
	cout << "Input a number: ";
	cin >> number;
	binary(number);
	
return 0;
}
void binary(int number)
{
	int binaries[32], i = 0;
	while (number > 0)		
	{
		binaries[i] = number % 2;
		number = number / 2;
		i++;
	}
	for (i = i - 1; i >= 0; i--)
        cout << binaries[i];
	cout << endl;	
}

