#include <iostream>
using namespace std;

class Complex {
    private:
        double real;
        double imaginary;

    public:
        // Parameterized constructor
        Complex(double r, double i) : real(r), imaginary(i) {
            cout << "Constructor called for (" << real << ", " << imaginary << ")" << endl;
        }

        // Destructor
        ~Complex() {
            cout << "Destructor called for (" << real << ", " << imaginary << ")" << endl;
        }

        void display() {
            cout << "Real: " << real << ", imag: " << imaginary << endl;
        }
};

void func() {
    Complex c1(1.0, 2.0);
    c1.display();
    Complex c2(3.0, 4.0);
    c2.display();
}

int main() {
    Complex c3(5.0, 6.0);
    c3.display();
    func();
    Complex c4(7.0, 8.0);
    c4.display();
    return 0;
}