#include <iostream>
using namespace std;

int fact(int numb)
{
        int i = 1, facto = 1;
        while (i <= numb)
        {
                facto = facto * i;
                i++;
        }

        return facto;
}
int main()
{
        int number, factorial;
        cout << "number: ";
        cin >> number;
        factorial = fact(number);
        cout << "The factorial of " << number << " is " << factorial << endl;

return 0;
}



