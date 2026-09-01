#include <iostream>
using namespace std;

class Rectangle
{
private:
    float length, width;

public:
    // Constructor
    Rectangle(float l, float w)
    {
        length = l;
        width = w;
        cout << "Constructor called." << endl;
    }

    // Member function to calculate area
    float calculateArea()
    {
        return length * width;
    }

    // Member function to calculate perimeter
    float calculatePerimeter()
    {
        return 2 * (length + width);
    }

    // Destructor
    ~Rectangle()
    {
        cout << "Destructor called." << endl;
    }
};

int main()
{
    float length, width;

    cout << "Enter length: ";
    cin >> length;

    cout << "Enter width: ";
    cin >> width;

    Rectangle r(length, width);

    cout << "Area = " << r.calculateArea() << endl;
    cout << "Perimeter = " << r.calculatePerimeter() << endl;

    return 0;
}