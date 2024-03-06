#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class User {
   private:
    string id;
    string password;
    static unordered_map<string, string> users;

   public:
    User(string id) {
        if (users.find(id) != users.end()) {
            cout << "ID exists" << endl;
            return;
        }
        this->id = id;
        this->password = "000000";
        users[id] = password;
    }

    void displayId() { cout << id << endl; }

    void changePassword(string oldPassword, string newPassword) {
        if (oldPassword != password) {
            return;
        }
        if (newPassword.length() != 6) {
            return;
        }
        password = newPassword;
        users[id] = newPassword;
        cout << "succeed" << endl;
    }
};

unordered_map<string, string> User::users;

int main() {
    User user1("001231");
    user1.displayId();

    User user2("001231");

    user1.changePassword("000000", "123456");
    user1.displayId();

    User user3("789456");
    user3.displayId();

    return 0;
}
