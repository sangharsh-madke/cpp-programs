#include <iostream>
using namespace std;

class Area
{
public:
    // Area of square
    int calculateArea(int side)
    {
        return side * side;
    }

    // Area of rectangle
    int calculateArea(int length, int width)
    {
        return length * width;
    }

    // Area of circle
    float calculateArea(float radius)
    {
        return 3.14 * radius * radius;
    }
};

int main()
{
    Area a;

    int side, length, width;
    float radius;

    cout << "Enter side of square: ";
    cin >> side;
    cout << "Area of square = " << a.calculateArea(side) << endl;

    cout << "\nEnter length and width of rectangle: ";
    cin >> length >> width;
    cout << "Area of rectangle = " << a.calculateArea(length, width) << endl;

    cout << "\nEnter radius of circle: ";
    cin >> radius;
    cout << "Area of circle = " << a.calculateArea(radius) << endl;

    return 0;
}