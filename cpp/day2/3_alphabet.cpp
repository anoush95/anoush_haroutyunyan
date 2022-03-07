#include <iostream>
using namespace std;

int main ()
{
	char alphabet;
	cout << "Input an alphabet: ";
	cin >> alphabet;

        if ((alphabet >= 'a' && alphabet <= 'z') || (alphabet >= 'A' && alphabet <= 'Z'))

        switch (alphabet)
        {
                case 'A':

                case 'a':

                case 'E':

                case 'e':

                case 'I':

                case 'i':

                case 'O':

                case 'o':

                case 'U':

                case 'u':
                        cout << alphabet << " is a vowel" << endl;
                        break;

                default:
                        cout << alphabet << " is a consonant" << endl;
                        break;
        }
        return 0;
   }


