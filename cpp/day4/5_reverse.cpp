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
        	array[i] = ((rand() % 300) - 300) / 10;
	}
	cout << endl << "Original array: " << endl;
	for (i = 0; i < number; i++)
	{
        	cout << array[i] << "; ";
	}
	cout << endl << "Final array: " << endl;;
	for (i = (number - 1); i >= 0; i--)
	{
		cout << array[i] << "; ";
	}
        cout << endl;
return 0;
}


