#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
	string sentence = " ";
	getline (cin, sentence);
	string sentence_word [sentence.size()];
	int x = 0;
	for (int i = 0; sentence[i] != '\0'; i++)
	{
		if (sentence[i] >= 'A' && sentence[i] <= 'Z')
		{
			sentence[i] = sentence[i] + ('a' - 'A');
		}
		if (sentence[i] == ' ')
		{
			x++;
			continue;
		}
		sentence_word[x] += sentence[i];
	}	               
	ifstream f_dict ("dictionary.txt");
	string word = " ";
	int j = 0;
	while (f_dict >> word)
	{
		for (int i = 0; i < sentence.size(); i++)
		{
			if (sentence_word[i].size() == word.size()) 
			{
				for (int k = 0; k < sentence_word[i].size(); k++) 
				{
					if (sentence_word[i][k] == word[k]) 
					{
						j++;						
						if (j == word.size() - 1)
						{
							sentence_word[i] = word;
						}
					}	
				}
			}
			
		}
		j = 0;
	}
	f_dict.close();
	ofstream foo ("corrected.txt");
	for (int i = 0; i < sentence.size(); i++)
	{	
		foo << sentence_word[i] << " ";
		cout << sentence_word[i] << " ";
	}
	foo.close();
	cout << endl;
return 0;
}
