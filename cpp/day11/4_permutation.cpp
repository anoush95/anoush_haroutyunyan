#include <iostream>
#include <string>

using namespace std;
void permute (string word, int left, int right);
int main ()
{
	string word = "";
	cout << "Input a word: ";
    	cin >> word;
    	int n = word.size ();
    	permute (word, 0, n-1);
return 0;
}
void permute (string word, int left, int right)
{   
	if (left == right)
	{
		cout << word << endl;
	}
    	else
    	{
        	for (int i = left; i <= right; i++)
        	{
			swap (word[left], word[i]);
            		permute (word, left + 1, right);
            		swap (word [left], word[i]);
        	}
    	}
}

