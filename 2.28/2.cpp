#include <iostream>
using namespace std;
int main() {
    int w = 0;
    int a = 0, b = 0, c = 0;
    for (c = 0; c <= 20; c++) {
        for (b = 0; b <= 50; b++) {
            for (a = 0; a <= 100; a++) {
                if (a + 2 * b + 5 * c == 100) {
                    w++;
                }
            }
        }
    }
    cout << w;
    return 0;
}
