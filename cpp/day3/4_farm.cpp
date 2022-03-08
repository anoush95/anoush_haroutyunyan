#include <iostream>
using namespace std;

void f_result(int chickens, int cows, int pigs, int result)
{
	result = (chickens * 2) + (cows * 4) + (pigs * 4);

        cout << "result = " << result << endl;
}
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

        f_result(chickens, cows, pigs, result);

return 0;
}

