#include <iostream>
using namespace std;

int main ()
{
	int x, y, tmp;
	int *pointer1, *pointer2;

	cout << "Input x = ";
	cin >> x;
	cout << "Input y = ";
	cin >> y;

	pointer1 = &x;
	pointer2 = &y;

	tmp = *pointer1;
	*pointer1 = *pointer2;
	*pointer2= tmp;

	cout << "x = " << x << " y = " << y << endl;
return 0;
}
