#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main ()
{
srand (time(NULL));
        int i, j, number;
        const int m = 3;
        int array1 [m][m];
	int array2 [m][m];
	int arrSum [m][m];
	
        for (i = 0; i < m; i++)
        {
                for (j = 0; j < m; j++)
                {
                        number = rand() % 10;
                        array1[i][j] = number;
                        cout << array1[i][j] << " ";
		}
		cout << endl;
	}
	
	cout << endl;	
 	for (i = 0; i < m; i++)
        {
                for (j = 0; j < m; j++)
                {
			number = rand() % 10;
                        array2[i][j] = number;
                        cout << array2[i][j] << " ";
                }
		cout << endl;
        }
        cout << endl;

	for(i = 0; i < m; i++)
	{
		for(j = 0; j < m; j++)
		{
			arrSum[i][j] = array1[i][j] + array2[i][j];
			cout << arrSum[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
return 0;
}

