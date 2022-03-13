#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main ()
{
	srand(time(NULL));

	int  number;
	const int m = 5;
       	const int n = 3;
	int array [m][n];

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			number = rand() % 100 + 1;
			array[i][j] = number;
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
	
	for (int i = 0; i < m; i++)
	{
		int i_max = 0,j_max = 0;
  		int i_min = 0,j_min = 0; 
		int max = array[i][0];
     		int min = array[i][0];

		for (int j = 0; j < n; j++)
		{
			if (array[i][j] > max)
			{
				max = array[i][j];
				j_max = j;
			}
			if (array[i][j] < min)
			{
				min = array[i][j];
				j_min = j;
			}		
		}
	array[i][j_max] = min;
	array[i][j_min] = max;
	}
	cout << "New matrix: " << endl;
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
return 0;
}
