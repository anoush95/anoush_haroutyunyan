#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand (time(NULL));

        int number, i, j;
       	double temporary;

        cout << "Enter total number of elements: ";
        cin >> number;
	double array[number];
        for (i = 0; i < number; i++)
	{
                array[i] = ((rand() % 300 ) - 300) / 10.0;
	}
	cout << "Original array: ";
        for (i = 0; i < number; i++)
	{
		cout << array[i] <<"; ";

	}	
	for (i = 0; i < number; i++)
	{
		for (j = i + 1; j < number; j++)
		{
			if (array[i] > array[j])
			{
				temporary = array[i];
				array[i] = array[j];
			        array[j] = temporary;
			}
		}
	}
	cout << endl << "Final array: ";
	for (i = 0; i < number; i++)
	{

		cout << array[i] << "; ";
	}
	cout << endl;
return 0;
}


