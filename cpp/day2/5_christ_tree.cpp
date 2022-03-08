#include <iostream>
using namespace std;

int main()
{
        int a;
        cout << "Height: ";
        cin >> a;

        const int height = a;
        int i = 0;

        while (i < height)
        {
                int j = 0;

                while (j <= i)
                {      
		       	cout << "*";
                        j++;
                }
                cout << endl;
                i ++;
        }
	
	cout << endl;


	
	while (i > 0)
        {
                int j = 0;

                while (j < i)
                {
		 	cout << "*";
                        j++;
                }
                cout << endl;
                i --;
        }
	
	cout << endl;


	
       	i = 1;
        while (i <= height)
        {
               	int j = height;
                while (j>= 0)
                {
                        if (j < i)
                        {
                                cout << "*";
                        }
                        else
                        {
                                cout << " ";
                        }
                        j--;
                }
                cout << endl;
                i++;
        }

        cout << endl;


	
	i = 0;
	int j;

        while (i < height)
        {
                j = 0;

                while (j < (height - i))
                {
                        cout << " ";
                        j++;
                }

                	j = 0;

                	while (j < (2 * i + 1))
                	{
                        	cout << "*";
                        	j++;
                	}
               		cout << endl;
               		i++;
        }

return 0;
}
                                                                                                                                                                                                               
