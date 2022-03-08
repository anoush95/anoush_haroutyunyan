#include <iostream>
using namespace std;

void result(int length, int width, int area, int perimeter)
{
	area = length * width;
        cout << "area = " << area << endl;

        perimeter = 2 * (length + width);
        cout << "perimeter = " << perimeter << endl;
}
int main () 
{
        int length;
        int width;
        int area;
        int perimeter;

        cout << "length: ";
        cin >> length;

        cout << "width: ";
        cin >> width;

        result(length, width, area, perimeter);

return 0;
}

