#include <iostream>
using namespace std;

int main ()
{
	const int size = 6;
	int array[size][size];
	int number = 1, i, j, length = size, p = 0;
	
	while (number <= size * size)
	{	

		for(i = p; i < length; i++)
		{
			array[p][i] = number;
			number++;
		}
		for(i = p + 1; i < length; i++)
		{
			array[i][length - 1] = number;
                	number++;

		}
		for(i = length - 2; i >= p; i--)
        	{
                	array[length - 1][i] = number;
                	number++;

        	}

		for(i = length - 2; i > p; i--)
		{
			array[i][p] = number;
                	number++;

		}
		p++; length -= 1;
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
