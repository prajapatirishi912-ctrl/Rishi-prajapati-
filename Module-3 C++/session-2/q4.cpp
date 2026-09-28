#include <iostream>
using namespace std;

class Playlist {
public:
    char name[50];
    char createdOn[20];
    int isPublic;

    char songs[10][50];
    int songCount;

    Playlist() {
        songCount = 0;
    }

    void addSong(char songTitle[]) {
        for (int i = 0; songTitle[i] != '\0'; i++) {
            songs[songCount][i] = songTitle[i];
            songs[songCount][i + 1] = '\0';
        }

        songCount++;
    }

    void showSongs() {
        cout << "\nSongs List:\n";

        for (int i = 0; i < songCount; i++) {
            cout << i + 1 << ". " << songs[i] << "\n";
        }
    }
};

int main() {
    Playlist p;

    cout << "Enter Playlist Name: ";
    cin >> p.name;

    cout << "Enter Created Date: ";
    cin >> p.createdOn;

    p.isPublic = 1;

    char song[50];

    cout << "Enter Song 1: ";
    cin >> song;
    p.addSong(song);

    cout << "Enter Song 2: ";
    cin >> song;
    p.addSong(song);

    cout << "Enter Song 3: ";
    cin >> song;
    p.addSong(song);

    p.showSongs();

    return 0;
}
