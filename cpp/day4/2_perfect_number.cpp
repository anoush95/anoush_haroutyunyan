#include <iostream>
using namespace std;
void check(int number);

int main()
{
        int number;
        cout << "Input a number: ";
        cin >> number;
        check(number);

return 0;
}
void check(int number)
{
        int sum = 0;
        for (int i = 1; i < number; i++)
	{
		if(number % i == 0)
               	{
			sum = sum + i;
               	}
	}
        if (number == sum)
        {
        	cout << number << " is a perfect number" << endl;
       	}
        else
        {
                cout << number << " is not a perfect number" << endl;
       	}	
}
              
