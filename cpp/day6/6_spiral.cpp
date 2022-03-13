#include <iostream>
using namespace std;

int main ()
{
	const int size = 3;
	int array[size][size];
	int number = 1;
	int i,j;

	for(i = 0, j = 0; j < size; j++)
	{
		array[i][j] = number;
		number++;
	}
	for(i = size - 2, j = size - 1; i < size; i++)
	{
		array[i][j] = number;
                number++;

	}
	for(i = size - 1, j = size - 2; j >= 0; j--)
        {
                array[i][j] = number;
                number++;

        }

	for(i = size - 2, j = 0; j < size - 1; j++)
	{
		array[i][j] = number;
                number++;

	}
	for(i = 0; i < size; i++)
	{
		for(j = 0; j < size; j++)
		{
			cout << array[i][j] << " ";
		}
		cout <<endl;
	}
  return 0; 
}
