#include <iostream>
#include "polynomial.h"
using namespace std;

int main()
{
	Polynomial a, b, c;
        a.Set (3, 2); 
        a.Set (2, 4); 

        b.Set (5, 2); 
        b.Set (-3, 5); 

        c = a - b; 
        c.Print();
        cout << endl;
        a -= b;
        a.Print();
        cout << endl;

        c = a + b;
        c.Print();
        cout << endl;
        a += b;
        a.Print();
        cout << endl;

        c = a * b;
        c.Print();
        cout << endl;
        a *= b;
        a.Print();
        cout << endl;

      	c = a.MultiplyByNumber(2);
        c.Print();
        cout << endl;

return 0;
}
