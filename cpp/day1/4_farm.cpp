#include <iostream>
using namespace std;

int main() 
{
        int chickens;
        int cows;
        int pigs;
        int result;

        cout << "chickens = ";
        cin >> chickens;

        cout << "cows = ";
        cin >> cows;

        cout << "pigs = ";
        cin >> pigs;

        result = (chickens * 2) + (cows * 4) + (pigs * 4);

        cout << "result = " << result << endl;

return 0;
}

