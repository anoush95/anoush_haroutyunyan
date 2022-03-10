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
		cout << endl;

		sum1 = matrix[1][0] + matrix[2][0] + matrix[2][1] + matrix[3][0];
		
		sum2 = matrix[0][1] + matrix[0][2] + matrix[0][3] + matrix[1][2];
	
		sum3 = matrix[1][4] + matrix[2][3] + matrix[2][4] + matrix[3][4];
            
		sum4 = matrix[3][2] + matrix[4][1] + matrix[4][2] + matrix[4][3];
                  
                sum5 = sum1 + sum2;
	    		
		sum6 = sum2 + sum3;

		sum7 = sum3 + sum4;

		sum8 = sum4 + sum1;
                
		
		cout << sum1 << endl << sum2 << endl << sum3 << endl << sum4 << endl << sum5 << endl << sum6 << endl << sum7 << endl << sum8 << endl;
                        
return 0;
}


