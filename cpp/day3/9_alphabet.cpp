#include <iostream>
using namespace std;

bool vowel (char a)
{
	if ( a == 'a' || a == 'A' || a == 'e' || a == 'E' || a == 'i' || a == 'I' || a =='o' || a =='O' || a == 'u' || a == 'U') 
	{
	
		cout << a << " is a vowel" << endl;
		return true;
	}
	
       	else 
	{

		cout << a << " is a consonant" << endl;
		return false;
	}
    
}

int main ()
{	
	char a;
	cout << "Input an alphabet: ";
	cin >> a;
	
	if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
	
	{
		vowel(a);
	}
	return 0;
   }                          

