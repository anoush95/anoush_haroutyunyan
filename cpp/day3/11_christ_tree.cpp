#include <iostream>
using namespace std;

void tree1(int i, int j, int height)
{
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

void tree2(int i, int j,int height)
{
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

void tree3(int i, int j, int height)
{
	i = 1;
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
void tree4(int i, int j, int height)
{
	i = 0;

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

        tree1(i, j, height);

	tree2(i, j, height);

	tree3(i, j, height);

	tree4(i, j, height);


return 0;
}
                                                                                                                                                                                                               
