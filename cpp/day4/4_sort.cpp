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
	cout << "Original array: ";
        for(i=0; i < number; i++)
	{
		cout << array[i]<<" ";

	}	
	for(i=0; i < number; i++)
	{
		for(j = i + 1; j < number; j++)
		{
			if(array[i] > array[j])
			{
				temporary = array[i];
				array[i] = array[j];
			        array[j] = temporary;
			}
		}
	}
	cout << endl << "Final array: ";
	for(i = 0; i < number; i++)
	{

		cout << array[i] << ' ';
	}
	cout << endl;
return 0;
}


