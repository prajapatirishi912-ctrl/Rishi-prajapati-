#include <iostream>
using namespace std;

class SocialMediaUser {
public:
    char username[50];
    int followers;

    void displayProfile() {
        cout << "\nUsername: " << username << "\n";
        cout << "Followers: " << followers << "\n";
    }
};

int main() {
    SocialMediaUser user;

    cout << "Enter Username: ";
    cin >> user.username;

    cout << "Enter Followers: ";
    cin >> user.followers;

    user.displayProfile();

    return 0;
}
