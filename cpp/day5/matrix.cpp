#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
        int sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0, sum5 = 0, sum6 = 0, sum7 = 0, sum8 = 0, i, j;
        const int n = 5;
        int matrix[n][n];

        for(i=0; i<n ; i++)
        {
                for(j=0; j<n; j++)
                {
                        matrix[i][j] = (rand()%10) + 1;
                        {

                                cout << matrix[i][j]<<",";
                        }

                }
                cout << endl;

	}        
return 0;
}


