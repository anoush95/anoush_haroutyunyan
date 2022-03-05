#include <iostream>
using namespace std;

int main() {

        int x;
        cout << "Enter a number:\n";
        cin >> x;

        int y;
        cout << "Guess the number:\n";
        cin >> y;

        do 
	{
                if (y < x) 
		{
                	cout << "Enter a larger number:\n";
			cin >> y;
                }
                else if (y > x) 
		{
                        cout << "Enter a smaller number:\n";
			cin >> y;
                }
		else 
		{	
			break;
		}

		
        }
        
	while (y != x);
	cout << "You guessed the number!\n";


        return 0;
}

