#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main ()
{
srand (time(NULL));
        int i, j, number, count, index = -1;
        const int m = 3;
       	const int n = 4;
        int array [m][n];

        for (i = 0; i < m; i++)
        {
                for (j = 0; j < n; j++)
                {
                        number = rand() % 10;
                        array[i][j] = number;
                        cout << array[i][j] << " ";
                }
                cout << endl;
        }
	for (i = 0; i < m; i++)
        {
		count = 0;
                for (j = 0; j < n; j++)
                {
			if(array[i][j] % 2 == 0 && array[i][j] != 0)
			{
				count++;
			}
		}
	}
			if(count == n)
			{
				index = i;
				cout << index << endl;
			}
			else
			cout << "No" << endl;
		

return 0;
}
