#include <iostream>
using namespace std;

int main ()
{
	int n = 7;
        int arr[n];
        int sum = 0, i;
        int *pointer;
        cout << "Enter 7 numbers: \n";
        for (i = 0; i < n; i++)
        {
        	cin >> arr[i];
        }
        pointer = arr;
        i = 0;
        while(i < n)
        {
                sum = sum + *pointer;
                pointer++;
                i ++;
        }
        cout << "The sum is " << sum << endl;
return 0;
}


