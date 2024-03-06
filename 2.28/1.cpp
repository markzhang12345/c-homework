#include <iostream>
using namespace std;
int main() {
    int n1, n2;
    cin >> n1 >> n2;
    char c;
    cin >> c;
    float ret;
    if (c == '+')
        ret = n1 + n2;
    else if (c == '-')
        ret = n1 - n2;
    else if (c == '*')
        ret = n1 * n2;
    else if (c == '/') {
        if (n2 == 0) {
            cout << "error";
            return 0;
        } else {
            ret = (n1 * 1.0) / n2;
        }
    } else {
        cout << "error";
        return 0;
    }
    cout << n1 << c << n2 << '=' << ret;
    return 0;
}
