#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    if (b > a) {
        int j = a;
        a = b;
        b = j;
    }
    for (int i = a; i > 0; i--) {
        if (a % i == 0 && b % i == 0) {
            cout << i;
            break;
        }
    }
    return 0;
}
