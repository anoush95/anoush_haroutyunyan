#include <iostream>
#include <string>
 
using namespace std;

int main () 
{
	string words;
	cout << "Input words: "; 
	getline (cin, words);

	int Bs = 0;
	int B_words = 0;
	for (int i = 0; i < words.size(); i++) 
	{
		if (words[i] == 'B') 
		{
			Bs++;
		}
		if (words[i] == ' ' || i == words.size() - 1) 
		{
			if (Bs == 2) 
			{
				B_words++;	
			}
		Bs = 0;
	
		}
	}
	cout << "The number of words with BB is:  " << B_words << endl;

  return 0;
}
