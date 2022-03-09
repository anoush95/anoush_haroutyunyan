#include <iostream>
using namespace std;

int main()
{
        int array[100], number, i, largest;
        cout << "Enter total number of elements: ";
        cin >> number;
        cout << "Enter " << number << " number:\n";

        for(i = 0; i < number; i++)
                cin >> array[i];
		cout << endl;
	for(i = 0; i < number; i++)
		cout << array[i ];
		cout << endl;
        largest = array[0];
        for(i=0; i < number; i++)
        {
                if(largest < array[i])
                {
                        largest = array[i];
                }

        }
        cout << "The largest number is " << largest << endl;

return 0;
}




