#include <iostream>
using namespace std;

class Complex {
private:
    float real, imag;

public:
    void input() {
        cout << "Enter real part: ";
        cin >> real;

        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    void display() {
        cout << real;

        if (imag >= 0)
            cout << " + " << imag << "i";
        else
            cout << " - " << -imag << "i";

        cout << endl;
    }

    Complex add(Complex c) {
        Complex result;
        result.real = real + c.real;
        result.imag = imag + c.imag;
        return result;
    }

    Complex subtract(Complex c) {
        Complex result;
        result.real = real - c.real;
        result.imag = imag - c.imag;
        return result;
    }
};

int main() {
    Complex c1, c2, sum, difference;

    cout << "Enter first complex number:\n";
    c1.input();

    cout << "\nEnter second complex number:\n";
    c2.input();

    sum = c1.add(c2);
    difference = c1.subtract(c2);

    cout << "\nFirst complex number: ";
    c1.display();

    cout << "Second complex number: ";
    c2.display();

    cout << "\nAddition: ";
    sum.display();

    cout << "Subtraction: ";
    difference.display();

    return 0;
}