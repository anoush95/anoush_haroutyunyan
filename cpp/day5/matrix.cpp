#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
        int lower_left_triangle = 0, upper_right_triangle = 0, upper_left_triangle = 0, lower_right_triangle = 0, upper_triangle = 0, right_triangle = 0, 
	lower_triangle = 0, left_triangle = 0, i, j;
        const int n = 5;
        int matrix[n][n];

        for(i=0; i<n ; i++)
        {
                for(j=0; j<n; j++)
                {
                        matrix[i][j] = (rand()%10);
                        {

                                cout << matrix[i][j]<<" ";
                        }

                }
                cout << endl;
	}
	for(i=0; i<n ; i++)
        {
                for(j=0; j<n; j++)
		{ 
			if(i != j && i < j)
			{			
				lower_left_triangle += matrix[i][j];
			
			}
			if( i != j && i > j)
			{
				upper_right_triangle += matrix[i][j];
				
			}
			if((i + j < n - 1) && (i<=n - 1 || j <= n - 1))
			{
				upper_left_triangle += matrix[i][j];
			}

			if((i + j >= n) && (i < n || j == n - 1 || j < n ))
			{
				lower_right_triangle += matrix[i][j];
			}
			if(i != j && i + j != n - 1)
			{
				if(i < j && i + j < n - 1)
				{
					upper_triangle += matrix[i][j];
				}
				if(i < j && i + j >= n)
				{
					right_triangle += matrix[i][j];
				}
				if(i > j && i + j >= n)
				{
					lower_triangle += matrix[i][j];
				}
				if(i > j && i + j < n - 1)
				{
					left_triangle += matrix[i][j];
				}
			}
		}
	}
	cout << endl << "Lower left triangle: " << lower_left_triangle << endl << "Upper right triangle: " <<  upper_right_triangle << endl 
	<< "Upper left triangle: " << upper_left_triangle << endl << "Lower right triangle: " << lower_right_triangle << endl << "Upper triangle: " << upper_triangle << endl 
	<< "Right triangle: " << right_triangle << endl << "Lower triangle: " << lower_triangle << endl << "Left triangle: " <<left_triangle << endl;
	       
return 0;
}


