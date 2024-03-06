#include <iostream>
using namespace std;
int main() {
    int(*p)[3] = new int[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> p[i][j];
        }
    }
    int sum = 0;
    int max = p[0][0];
    int min = p[0][0];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum += p[i][j];
            if (max < p[i][j])
                max = p[i][j];
            if (min > p[i][j])
                min = p[i][j];
        }
    }
    float ret = sum * 1.0 / 9;
    cout << "最大值为" << max << endl
         << "最小值为" << min << endl
         << "平均值为" << ret << endl;
    delete[] p;
    return 0;
}
