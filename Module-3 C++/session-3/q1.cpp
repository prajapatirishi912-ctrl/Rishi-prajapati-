#include <iostream>
using namespace std;

class Playlist {
public:
    char name[50];

    // Default constructor
    Playlist() {
        cout << "Welcome to your Playlist!\n";
    }

    void setName() {
        cout << "Enter Playlist Name: ";
        cin >> name;
    }

    void showName() {
        cout << "Playlist Name: " << name << "\n";
    }
};

int main() {
    Playlist p;

    p.setName();
    p.showName();

    return 0;
}
