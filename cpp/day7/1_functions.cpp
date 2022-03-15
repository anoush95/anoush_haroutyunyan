#include <iostream>
using namespace std;

void sum1 (int *a, int *b, int *sum);
void sum2 (int &a, int &b, int &sum);
void sum3 (int a, int b, int &sum);
void sum4 (int &a, int *b, int &sum);
void sum5 (int *a, int *b, int &sum);

int main ()
{
	int x, y, s;  
 
	cout << "Input the first number: ";
	cin >> x;

	cout << "Input the second number: ";
	cin >> y;

	sum1 (&x, &y, &s);
	sum2 (x, y, s);
	sum3 (x, y, s);
	sum4 (x, &y, s);
	sum5 (&x, &y, s);

return 0;
}
void sum1 (int *a, int *b, int *sum)
{
	*sum = *a + *b;
	cout << "sum1 = " << *sum << endl;
}

void sum2 (int &a, int &b, int &sum)
{
	sum = a + b;
	cout << "sum2 = " << sum << endl;
}
void sum3 (int a, int b, int &sum)
{
	sum = a + b;
	cout << "sum3 = " << sum << endl;
}
void sum4 (int &a, int *b, int &sum)
{
	sum = a + *b;
	cout << "sum4 = " << sum << endl;
}
void sum5 (int *a, int *b, int &sum)
{
	sum = *a + *b;
	cout << "sum5 = " << sum << endl;
}






