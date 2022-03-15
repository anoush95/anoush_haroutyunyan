#include <iostream>
#include "atoi.h"

using namespace std;

int main (int argc, char *argv[])
{
	int sum1 = 0, sum2 = 0;
	for(int i = 1; i < argc; i++)
	{
		sum1 += atoi(argv[i]);
		sum2 += myAtoi(argv[i]);

	}
	cout << "atoi: " << sum1 << endl;
        cout << "myatoi: " << sum2 << endl;

return 0;
}







