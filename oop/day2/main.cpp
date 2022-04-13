#include <iostream>
#include "polynomial.h"
using namespace std;

int main()
{
	Polynomial a, b, c;
	a.Set (7, 4);
	a.Set (1, 2);

	b.Set (6, 3);
	b.Set (-3, 2);

	c = a.Add(b);
	c.Print();
	cout << "\n";

	c = a.Multiply(b);
	c.Print();
	cout << endl;
return 0;
}
        
