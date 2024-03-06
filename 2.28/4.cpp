#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
using namespace std;

float exp1(int n) {
    if (n > 365)
        return 1;
    double prob = 1.0;
    for (int i = 0; i < n; i++) {
        prob *= (365 - i) / 365.0;
    }
    return prob;
}

float exp2(int n) {
    if (n > 365)
        return 1;
    int T = 100000;
    int m = 0;
    srand((unsigned)time(NULL));
    while (T--) {
        int* p = new int[n];
        for (int i = 0; i < n; i++) {
            p[i] = rand() % 365 + 1;
        }
        std::sort(p, p + n);
        int flag = 1;
        for (int i = 1; i < n; i++) {
            if (p[i] == p[i - 1]) {
                flag = 0;
                break;
            }
        }
        if (flag)
            m++;
        delete[] p;
    }
    return m * 1.0 / 100000;
}

int main() {
    int n;
    cin >> n;
    float ret1 = exp1(n);
    cout << "数学方法计算得" << exp1(n) << endl;
    cout << "模拟计算得" << exp2(n) << endl;
    return 0;
}
