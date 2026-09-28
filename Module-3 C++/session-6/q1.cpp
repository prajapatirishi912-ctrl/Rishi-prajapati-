#include <iostream>
using namespace std;

class Song {
private:
    char title[50];
    char artist[50];

public:
    void setTitle(char newTitle[]) {
        int i = 0;

        while (newTitle[i] != '\0') {
            title[i] = newTitle[i];
            i++;
        }

        title[i] = '\0';
    }

    void setArtist(char newArtist[]) {
        int i = 0;

        while (newArtist[i] != '\0') {
            artist[i] = newArtist[i];
            i++;
        }

        artist[i] = '\0';
    }

    char* getTitle() {
        return title;
    }

    char* getArtist() {
        return artist;
    }
};

int main() {
    Song s;

    char title[50];
    char artist[50];
    char newTitle[50];

    cout << "Enter Song Title: ";
    cin >> title;

    cout << "Enter Artist Name: ";
    cin >> artist;

    s.setTitle(title);
    s.setArtist(artist);

    cout << "\nOriginal Song: " << s.getTitle() << "\n";
    cout << "Artist: " << s.getArtist() << "\n";

    cout << "\nEnter New Song Title: ";
    cin >> newTitle;

    s.setTitle(newTitle);

    cout << "\nUpdated Song: " << s.getTitle() << "\n";
    cout << "Artist: " << s.getArtist() << "\n";

    return 0;
}
