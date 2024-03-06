#include <iostream>
using namespace std;

class Rational {
   public:
    Rational(int nn = 1, int mm = 1) : n(nn), m(mm) { simple(); }

    Rational R_add(Rational& A) { return Rational(n * A.m + m * A.n, m * A.m); }

    Rational R_sub(Rational& A) { return Rational(n * A.m - m * A.n, m * A.m); }

    Rational R_mul(Rational& A) { return Rational(n * A.n, m * A.m); }

    Rational R_div(Rational& A) { return Rational(n * A.m, m * A.n); }

    void print() { cout << n << "/" << m << endl; }

   private:
    int n;
    int m;

    void simple() {
        int g = gcd(n, m);
        n = n / g;
        m = m / g;
    }

    int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
};

int main() {
    Rational r1(2, 3);
    Rational r2(3, 4);

    Rational r3 = r1.R_add(r2);
    r3.print();

    r3 = r1.R_sub(r2);
    r3.print();

    r3 = r1.R_mul(r2);
    r3.print();

    r3 = r1.R_div(r2);
    r3.print();

    return 0;
}
