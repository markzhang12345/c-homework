#include <iostream>

using namespace std;

class Array {
   public:
    Array(int n) {
        this->n = n;
        data = new int[n];
        for (int i = 0; i < n; i++) {
            data[i] = 0;
        }
    }

    Array(const Array& other) {
        this->n = other.n;
        data = new int[n];
        for (int i = 0; i < n; i++) {
            data[i] = other.data[i];
        }
    }

    ~Array() { delete[] data; }

    void print() {
        for (int i = 0; i < n; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }

    void input() {
        for (int i = 0; i < n; i++) {
            cin >> data[i];
        }
    }

    void set(int index, int value) {
        if (index >= 0 && index < n) {
            data[index] = value;
        }
    }

   private:
    int* data;
    int n;
};

int main() {
    Array a(10);
    a.print();
    a.set(3, 5);
    a.print();
    Array b = a;
    b.print();
    return 0;
}
