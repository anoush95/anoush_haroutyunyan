#include <iostream>
using namespace std;
void sum_of_array_elements (int *pointer, int *number);

int main ()
{
	int num;
	cout << "Input the number of elements: ";
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
	sum_of_array_elements(array, &num);
return 0;
}

void sum_of_array_elements (int *pointer, int *number)
{	
	int sum = 0;
	int *ptr = pointer;
	while (ptr < pointer + *number)
    	{	
      		sum = sum + *ptr;
	 	ptr++;	
        }
        cout << endl << "The sum of the elements in the array is " << sum << endl;

}
