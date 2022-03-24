#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
        string sentence = " ";
	cout << "Input a sentence: ";
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
        ifstream en_hy ("en-hy.txt");
      	if (en_hy.is_open())
        {
                string str;
                while (getline(en_hy, str))
                { 
			for (int i = 0; i < sentence.size(); i++)
                	{
		 		string file_word;
                        	bool arrowFound = false;
                        	string translation = "";
                        	for (int i = 0; str[i] != '\0'; i++)
                        	{
                                	if (str[i] == '-' && str[i+1] == '>') 
					{
                                        	arrowFound = true;
                                	}
                                	if (!arrowFound) 
					{
                                        	file_word += str[i];
                                	} 
					else 
					{
                                        	translation += str[i + 2]  ;
                                	}
                        	}
                        	if (file_word == sentence_word[i])
                       		cout << translation << " ";
                	}
       		}
	}
	cout << endl;
	en_hy.close();
	ifstream hy_en ("hy-en.txt");
        if (hy_en.is_open())
        {
        	string str;
                while (getline(hy_en, str))
                {
                	for (int i = 0; i < sentence.size(); i++)
                	{
                        	string file_word;
                        	bool arrowFound = false;
                        	string translation = "";
                        	for (int i = 0; str[i] != '\0'; i++)
                        	{
                                	if (str[i] == '-' && str[i+1] == '>') 
					{
                                        	arrowFound = true;
                                	}
                                	if (!arrowFound) 
					{
                                        	file_word += str[i];
					}
                                 	else 
					{
                                        	translation += str[i + 2];
                                	}
                        	}
                        	if (file_word == sentence_word[i])
				{
                                	cout << translation << " ";
				}
                        }
                }
        }
        cout << endl;
	hy_en.close();
return 0;
}

