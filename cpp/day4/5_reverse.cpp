#include <iostream>
using namespace std;

int main()
{
        int array[100], number, i, j, temporary;

        cout << "Enter total number of elements: ";
        cin >> number;

        cout << "Enter " << number << " number:\n";
        for(i = 0; i < number; i++)
	{
        	cin >> array[i];
	}
	cout << endl << "Original array: " << endl;
	for(i = 0; i < number; i++)
	{
        	cout << array[i]<<" ";
	}
	cout << endl << "Final array: " << endl;;
	for(i = (number-1); i >= 0; i--)
	{
		cout << array[i]<<" ";
	}
        cout << endl;
return 0;
}


