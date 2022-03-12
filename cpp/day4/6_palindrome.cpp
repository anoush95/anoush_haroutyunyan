#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char word[20];
    	int i, length;
    	int flag = 0;
    
   	cout << "Input a word: "; 
    	cin >> word;
    
    	length = strlen(word);
    	const int diff = 'a' - 'A';
   	for(i = 0; i < length; i++)
	{
		if(word[i] >= 'A' && word[i] <= 'Z')
		{
			word[i] = word[i] + diff;
		}
	}
	for(i = 0; i < length; i++)
	{
        	if(word[i] != word[length - i - 1])
		{
            		flag = 1;
           		break;
		}
	} 
   	if (flag) 
	{
        	cout << word << " is not a palindrome" << endl;
	}
      	else
	{
		cout << word << " is a palindrome" << endl;
	}
    
return 0;
}
