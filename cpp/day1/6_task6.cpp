#include <iostream>
using namespace std;
int main() {
        int number;
        int factorial = 1;
        int i = 1;
        cout << "number: \n";
        cin >> number;
        while (i <= number)
        {
                factorial = factorial * i;
                i++;
        }

        cout << "The factorial of " << number << " is " << factorial << endl;
return 0;
}

