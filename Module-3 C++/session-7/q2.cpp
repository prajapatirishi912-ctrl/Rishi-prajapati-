#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("my_fav_songs.txt");

    char song[100];

    cout << "My Favorite Songs:\n";

    while (file.getline(song, 100)) {
        cout << song << "\n";
    }

    file.close();

    return 0;
}
