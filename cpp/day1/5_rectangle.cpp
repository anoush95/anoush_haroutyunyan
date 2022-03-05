#include <iostream>
using namespace std;

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

        area = length * width;
        cout << "area = " << area << endl;

        perimeter = 2 * (length + width);
        cout << "perimeter = " << perimeter << endl;

return 0;
}

