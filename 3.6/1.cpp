#include <iostream>
using namespace std;

class Time {
   private:
    int hour = 0;
    int min = 0;
    int second = 0;

   public:
    void set(int hour, int min, int second) {
        if (hour > 23 && min > 59 && second > 59) {
            cout << "false,please set again" << endl;
            return;
        }
        this->hour = hour;
        this->min = min;
        this->second = second;
    }
    void set(int second) {
        if (second > 59) {
            cout << "false,please set again" << endl;
            return;
        }
        this->second = second;
        this->hour = this->min = 0;
    }
    void tick();
    void print();
};

void Time::tick() {
    this->second++;
    if (this->second == 60) {
        this->min++;
        this->second = 0;
    }
    if (this->min == 60) {
        this->hour++;
        this->min = 0;
    }
    if (this->hour == 24) {
        this->hour = 0;
    }
}

void Time::print() {
    cout << this->hour << " : " << this->min << " : " << this->second << endl;
}

int main() {
    Time t1;
    t1.set(23, 59, 59);
    t1.print();
    t1.tick();
    t1.print();
    return 0;
}