#include <iostream>
using namespace std;

class Complex {
   public:
    Complex() : real(0), imag(0) {}
    Complex(double r, double i) : real(r), imag(i) {}
    void set(double r, double i) {
        real = r;
        imag = i;
    }
    void show() {
        cout << real;
        if (imag > 0)
            cout << "+";
        cout << imag << "i" << endl;
    }
    Complex operator+(const Complex& c) {
        return Complex(real + c.real, imag + c.imag);
    }
    Complex operator-(const Complex& c) {
        return Complex(real - c.real, imag - c.imag);
    }
    Complex operator*(const Complex& c) {
        return Complex(real * c.real - imag * c.imag,
                       real * c.imag + imag * c.real);
    }
    Complex operator/(const Complex& c) {
        double denominator = c.real * c.real + c.imag * c.imag;
        return Complex((real * c.real + imag * c.imag) / denominator,
                       (imag * c.real - real * c.imag) / denominator);
    }

   private:
    double real;
    double imag;
};

int main() {
    Complex a(3.0, 4.0);
    Complex b(2.0, -1.0);
    Complex result;
    cout << "a: ";
    a.show();
    cout << "b: ";
    b.show();
    result = a + b;
    cout << "a + b = ";
    result.show();

    result = a - b;
    cout << "a - b = ";
    result.show();

    result = a * b;
    cout << "a * b = ";
    result.show();

    result = a / b;
    cout << "a / b = ";
    result.show();

    return 0;
}
