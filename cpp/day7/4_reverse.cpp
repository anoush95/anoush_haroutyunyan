#include <iostream>
using namespace std;

int main ()
{
	int n = 7;
        int arr[n];
        int tmp = 0, i;
        int *startP = arr;
	int *endP = arr + n - 1;
        cout << "Enter 7 numbers: \n";
        for (i = 0; i < n; i++)
        {
                cin >> arr[i];
        }
	i = 0;
	cout << endl;
        while(i < n/2)
        {
		if(startP < endP)
		{
                	tmp = *endP;
			*endP = *startP;
			*startP = tmp;
                	startP++;
                	endP--;
		}
		i++;
        }
		
	for (i = 0; i < n; i++)
	{
		cout << arr[i] << endl;
	}
return 0;
}




