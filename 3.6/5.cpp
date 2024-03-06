#include <cstring>
#include <iostream>
using namespace std;

class String {
   public:
    String(const char* str = NULL) {
        if (str == NULL) {
            m_data[0] = '\0';
        } else {
            strncpy(m_data, str, sizeof(m_data) - 1);
            m_data[sizeof(m_data) - 1] = '\0';
        }
    }

    String(const String& other) {
        strncpy(m_data, other.m_data, sizeof(m_data) - 1);
        m_data[sizeof(m_data) - 1] = '\0';
    }

    void set(const char* str) {
        if (str != NULL) {
            strncpy(m_data, str, sizeof(m_data) - 1);
            m_data[sizeof(m_data) - 1] = '\0';
        }
    }

    void print() { cout << m_data << endl; }

   private:
    char m_data[100];
};

int main() {
    String str1("Hello");
    String str2(str1);

    str1.print();
    str2.print();

    str1.set("New String");
    str1.print();
    str2.print();

    return 0;
}
