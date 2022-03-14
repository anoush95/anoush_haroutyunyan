#include <iostream>
using namespace std;

void sum1(int *a, int *b, int *sum);
void sum2(int &a, int &b, int &sum);
void sum3(int a, int b, int &sum);
void sum4(int a, int *b, int &sum);
void sum5(int *a, int *b, int &sum);

int main ()
{
	int x, y, s;  
 
	cout << "Input the first number: ";
	cin >> x;

	cout << "Input the second number: ";
	cin >> y;

	sum1(&x, &y, &s);
	sum2(x, y, s);

return 0;
}
void sum1(int *a, int *b, int *sum)
{
	*sum = *a + *b;
	cout << "sum1 = " << *sum << endl;
}

void sum2(int &a, int &b, int &sum)
{
	int *a_address, *b_address, *sum_address;
	a_address = &a;
      	b_address = &b;
	sum_address = &sum;
	sum = *a_address + *b_address; 	
	cout << "sum2 = " << sum << endl;
}






