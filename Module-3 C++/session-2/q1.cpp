#include <iostream>
using namespace std;

class Playlist {
public:
    char name[50];
    char createdOn[20];
    int isPublic;

    void showPlaylist() {
        cout << "\nPlaylist Name: " << name << "\n";
        cout << "\n Created On: " << createdOn << "\n";

        if (isPublic == 1)
            cout << "Is Public: Yes\n";
        else
            cout << "Is Public: No\n";
    }
};

int main() {
    Playlist p;

    cout << "Enter Playlist Name: ";
    cin >> p.name;

    cout << "Enter Created Date: ";
    cin >> p.createdOn;

    cout << "Is Playlist Public? (1 = Yes, 0 = No): ";
    cin >> p.isPublic;

    p.showPlaylist();

    return 0;
}
