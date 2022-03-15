#include <iostream>
using namespace std;

void min_max (int *pointer, int *number);

int main ()
{
        int num;
        cout << "Input the number of elements:";
        cin >> num;
        int *array = new int[num];
        cout << "Input the elements:\n";
        int *pointer = array;

        while (pointer < array + num)
        {
        	cin >> *pointer++;
        }
        cout << endl;
        pointer = array;
        while (pointer < array + num)
        {
                cout << *pointer++ << " ";
        }
        cout << endl;
	min_max (array, &num);


return 0;
}
void min_max (int *pointer, int *number) 
{	
	int *ptr = pointer;
	int *max_pointer = pointer;
        int *min_pointer = pointer;
        for (ptr = pointer; ptr < pointer + *number; ptr++)
        {
        	if (*ptr > *max_pointer)
		{
			max_pointer = ptr;   
		}
		if (*ptr < *min_pointer)
		{
			min_pointer = ptr;
		}
        	
	}
        
    	cout << "max: " << *max_pointer << endl << "min: " << *min_pointer << endl;


}

