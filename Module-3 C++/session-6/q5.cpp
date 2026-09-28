#include <iostream>
using namespace std;

class UserProfile {
private:
    char phoneNumber[20];

public:
    void setPhoneNumber(char number[]) {
        int i = 0;

        while (number[i] != '\0') {
            phoneNumber[i] = number[i];
            i++;
        }

        phoneNumber[i] = '\0';
    }

    char* getPhoneNumber() {
        return phoneNumber;
    }
};

int main() {
    UserProfile user;

    char number[20];

    cout << "Enter Phone Number: ";
    cin >> number;

    user.setPhoneNumber(number);

    cout << "Phone Number: " << user.getPhoneNumber() << "\n";

    return 0;
}
