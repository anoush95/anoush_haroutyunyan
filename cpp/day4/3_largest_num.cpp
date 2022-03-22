#include <iostream>
using namespace std;

int main()
{
        int number, i, largest;
        cout << "Enter total number of elements: ";
        cin >> number;
	int array[number];
        cout << "Enter " << number << " numbers:\n";
        {
                for(i = 0; i < number; i++)
                {
                        cin >> array[i];

                }
        }
        cout << endl;
        largest = array[0];
        for(i = 0; i < number; i++)
        {
                if(largest < array[i])
                {
                        largest = array[i];
                }
        }
        cout << "The largest number is " << largest << endl;

return 0;
}






