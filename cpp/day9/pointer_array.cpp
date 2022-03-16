#include <iostream>
using namespace std;
void sort_array(int**, int m, int n);

int main() 
{
        const int m = 4;
	const int n = 3;
        int**  array = new int*[n];
        for (int** ptr1 = array; ptr1 < array + n; ptr1++) 
	{
		*ptr1 = new int[m];
                for (int* ptr2 = *ptr1; ptr2 < *ptr1 + m; ptr2++) 
		{
                        *ptr2 = rand() % 9 + 1;
			 cout << *ptr2 << " ";
                }
		cout << endl;
	}
	sort_array(array, m, n);
	cout << endl;
	for (int** ptr1 = array; ptr1 < array + n; ptr1++) 
	{
          	for (int* ptr2 = *ptr1; ptr2 < *ptr1 + m; ptr2++) 
		{
               		cout << *ptr2 << " ";
                }
                cout << endl;
        }

return 0;        
}
void sort_array(int** array, int m, int n) 
{
        int tmp;
        for (int** ptr1 = array; ptr1 < array + n; ptr1++) 
	{
                for (int* ptr2 = *ptr1; ptr2 < *ptr1 + m - 1; ptr2++) 
		{
                        for (int* ptr3 = ptr2 + 1; ptr3 < *ptr1 + m; ptr3++) 
			{
                                if (*ptr3 < *ptr2) 
				{
                                        tmp = *ptr3;
                                        *ptr3 = *ptr2;
                                        *ptr2 = tmp;	
                                }
                        }
                }
        }
}



