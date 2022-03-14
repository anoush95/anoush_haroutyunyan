#include <iostream>
using namespace std;

int main ()
{
        int n = 7;
        int arr[n];
        int sum = 0, i;
        int *min_pointer, *max_pointer, *pointer;
	max_pointer = arr;
        min_pointer = arr;
        cout << "Enter 7 numbers: \n";
        for (pointer = arr; pointer < arr + n; pointer++)
        {
		cin >> *pointer;
        	if (*pointer > *max_pointer)
		{
			max_pointer = pointer;   
		}
		if(*pointer < *min_pointer)
		{
			min_pointer = pointer;
		}
        	
	}
        
    	cout << "max: " << *max_pointer << endl << "min: " << *min_pointer << endl;

return 0;
}

