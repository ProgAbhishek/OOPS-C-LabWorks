#include <iostream>
using namespace std;

class Complex {
    private:
        double real;
        double imaginary;

    public:
        // Default constructor
        Complex() {
            real = 0;
            imaginary = 0;
            cout << "Default constructor called" << endl;
        }

        // Parameterized constructor
        Complex(double r, double i) {
            real = r;
            imaginary = i;
            cout << "Parameterized constructor called" << endl;
        }

        // Copy constructor
        Complex(Complex& c) {
            real = c.real;
            imaginary = c.imaginary;
            cout << "Copy constructor called" << endl;
        }

        // Destructor
        ~Complex() {
            cout << "Destructor called" << endl;
        }

        void display() {
            cout << "Real: " << real << ", Imaginary: " << imaginary << endl;
        }
};

int main() {
    // Create an object using default constructor
    Complex c1;
    c1.display();

    // Create an object using parameterized constructor
    Complex c2(3.0, 4.0);
    c2.display();

    // Create an object using copy constructor
    Complex c3 = c2;
    c3.display();

    return 0;
}