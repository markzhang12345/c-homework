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
    int c = 1;
    while (c) {
        c = a % b;
        a = b;
        b = c;
    }
    cout << a;
    return 0;
}
