#include <iostream>
using namespace std;

void tree1(int height)
{
	int i = 0, j;
	while (i < height)
        {
        	j = 0;

                while (j <= i)
                {
                        cout << "*";
                        j++;
                }
                cout << endl;
                i ++;
        }

        cout << endl;
}

void tree2(int height)
{
	int i, j;
        i = height;
        while (i > 0)
        {
                j = 0;

                while (j < i)
                {
                        cout << "*";
                        j++;
                }
                cout << endl;
                i --;
        }

        cout << endl;
}

void tree3(int height)
{

	int i = 1, j;
        while (i <= height)
        {
                j = height;
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
}
void tree4(int height)
{
	
	int i = 0, j;

        while (i < height)
        {
                j = 0;

                while (j <= (height - i))
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

}

int main()
{
        int a;
        cout << "Height: ";
        cin >> a;

        const int height = a;
        int i = 0;
	int j;

        tree1(height);

	tree2(height);

	tree3(height);

	tree4(height);


return 0;
}
                                                                                                                                                                                                               
