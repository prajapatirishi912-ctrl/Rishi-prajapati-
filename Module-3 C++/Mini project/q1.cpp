#include <iostream>
using namespace std;

class Content {
public:
    char title[50];
    char platform[30];
    int views;
    char status[20];

    void displayDetails() {
        cout << "\nContent Details:\n";
        cout << "Title: " << title << "\n";
        cout << "Platform: " << platform << "\n";
        cout << "Views: " << views << "\n";
        cout << "Status: " << status << "\n";
    }
};

int main() {
    Content c;

    cout << "Enter Title: ";
    cin >> c.title;

    cout << "Enter Platform: ";
    cin >> c.platform;

    cout << "Enter Views: ";
    cin >> c.views;

    cout << "Enter Status: ";
    cin >> c.status;

    c.displayDetails();

    return 0;
}
