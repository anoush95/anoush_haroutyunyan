#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main ()
{
	char word[20];
	cout << "Input a word: ";
	cin >> word;
	int length = strlen(word);
	const int diff = 'a' - 'A';
	for(int i = 0; i <= length; i++)
	{
		if(word[i] >= 'A' && word[i] <= 'Z')
                {
                        word[i] = word[i] + diff;
                }
	}
	for(int i = 0; i < length; i++)
	{

		if(word[i] != word[length - i - 1])
		{
			cout << "Not a palindrome" << endl;
			break;
		}
		else
		{	
			cout << "Palindrome" << endl;
			break;
		}
	}

return 0;
}
