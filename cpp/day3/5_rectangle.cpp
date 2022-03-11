#include <iostream>
using namespace std;

int area (int length, int width)
{
        return length * width;
}
int perimeter(int length, int width)
{
        return 2 * (length + width);
}
int main ()
{
        int length, width;

        cout << "length: ";
        cin >> length;

        cout << "width: ";
        cin >> width;

        area(length, width);
        perimeter(length, width);

        cout << "area = " << area(length, width) << endl << "perimeter = " << perimeter(length, width) << endl;


return 0;
}


