#include <iostream>
using namespace std;

class Playlist {
public:
    char name[50];
    char createdOn[20];
    int isPublic;

    void togglePublic() {
        if (isPublic == 1)
            isPublic = 0;
        else
            isPublic = 1;
    }

    void showPublicStatus() {
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

    cout << "Enter Public Status (1 = Yes, 0 = No): ";
    cin >> p.isPublic;

    cout << "\nBefore Toggle:\n";
    p.showPublicStatus();

    p.togglePublic();
    cout << "After First Toggle:\n";
    p.showPublicStatus();

    p.togglePublic();
    cout << "After Second Toggle:\n";
    p.showPublicStatus();

    return 0;
}
