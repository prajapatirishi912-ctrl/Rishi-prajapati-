#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("my_fav_songs.txt", ios::app);

    char song[100];

    cout << "Enter a new song name: ";
    cin.getline(song, 100);

    file << song << "\n";

    file.close();

    cout << "New song added successfully.\n";

    return 0;
}
