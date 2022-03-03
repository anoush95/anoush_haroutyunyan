#include <iostream>
using namespace std;
int main () {
        int i = 1;
        int number;
        cout << "number: ";
        cin >> number;
        while (i <= 10) {
                cout << number << "x" << i << "=" << number * i << endl;
                i++;
        }
        return 0;
        }

