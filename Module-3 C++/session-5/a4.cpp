#include <iostream>
using namespace std;

class MusicPlayer {
public:
    virtual void play(char song[]) {
        cout << "Playing: " << song << "\n";
    }
};

class SpotifyPlayer : public MusicPlayer {
public:
    void play(char song[]) override {
        cout << "Streaming on Spotify: " << song << "\n";
    }
};

int main() {
    char song[50];

    cout << "Enter Song Name: ";
    cin >> song;

    MusicPlayer *player = new SpotifyPlayer();

    player->play(song);

    delete player;

    return 0;
}
