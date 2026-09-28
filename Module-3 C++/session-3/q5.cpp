#include <iostream>
#include <fstream>
using namespace std;

class Playlist {
public:
    char name[50];

    Playlist(char playlistName[]) {
        int i = 0;

        while (playlistName[i] != '\0') {
            name[i] = playlistName[i];
            i++;
        }

        name[i] = '\0';

        cout << "Playlist created successfully!\n";
    }

    ~Playlist() {
        ofstream file("autosave.txt");

        file << "Playlist Name: " << name << "\n";

        file.close();

        cout << "Playlist auto-saved to autosave.txt\n";
    }

    void display() {
        cout << "Playlist Name: " << name << "\n";
    }
};

int main() {
    char playlistName[50];

    cout << "Enter Playlist Name: ";
    cin >> playlistName;

    Playlist p(playlistName);

    p.display();

    return 0;
}
