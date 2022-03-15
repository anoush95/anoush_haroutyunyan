#include <iostream>
using namespace std;

void reverse_elements (int *pointer, int *number);

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
        reverse_elements (array, &num);

return 0;
}
void reverse_elements (int *pointer, int *number)
{
	int *ptr = pointer;
        int *startP = pointer;
    	int *endP = pointer + *number - 1;

	while (ptr < pointer + *number / 2) 
	{
                int tmp;
                if (startP < endP) 
		{
                        tmp = *endP;
                        *endP = *startP;
                        *startP = tmp;
                        startP++;
                        endP--;
                }
                *(ptr++);
        }
        ptr = pointer;
        while (ptr < pointer + *number) 
	{
        	cout << *(ptr++) << " ";
        }
	cout << endl;
}
