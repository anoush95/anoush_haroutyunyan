#include <iostream>
using namespace std;

void swap_elements (int *x, int *y);

int main ()
{
	int x, y;

	cout << "Input x = ";
	cin >> x;
	cout << "Input y = ";
	cin >> y;
	swap_elements(&x, &y);

return 0;
}
void swap_elements (int *x, int *y)
{
	int tmp = *x;
        *x = *y;
        *y = tmp;
	cout << "x = " << *x << endl << "y = " << *y << endl;
}
