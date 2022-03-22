#include <iostream>
using namespace std;
int main ()
{	
	int number, i;
	cout << "Input the number of elements: ";
	cin >> number;
	int array [number];
        cout << "Input the elements:\n";
	for (int i = 0; i < number; i++)
	{
		cin >> array[i];
	}
	for (int i = 0; i < number; i++)
        {
		cout << array[i] << " ";
	}
	cout << endl;

	int p1, p2, temp;
	cout << "Input positions to swap:\n";
	cin >> p1 >> p2;

	temp = array[p1 - 1];
	array[p1 - 1] = array[p2 - 1];
	array[p2 - 1] = temp;
	for (int i = 0; i < number; i++)
        {
                cout << array[i] << " ";
        }
	cout << endl;
return 0;
}
