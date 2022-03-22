#include <iostream>
#include <ctime>
using namespace std;

int main ()
{
	srand (time(NULL));
	int number;
	cout << "Input the number of elements: ";
	cin >> number;
	int array[number];
	for (int i = 0; i < number; i++)
	{
		array[i] = rand() % 100;
		cout << array[i] << " ";
	}
	cout << endl;
	
	int max = 1, len = 1, index = 0;
	for (int i = 1; i < number; i++)
    	{
    		if (array[i] > array[i - 1])
		{
            		len++;
    		}
        	else
        	{
            		if (max < len)   
             		{
                		max = len;
	    			index = i - max;
	     		}   
            	len = 1;   
        	}   
    	}
     	if (max < len)
	{
        	max = len;
		index = number - max;
	}
	for (int i = index; i < max + index; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;

return 0;
}
