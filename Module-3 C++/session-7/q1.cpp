#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("my_fav_songs.txt");

    file << "tum ho \n";
    file << "fitoor\n";
    file << "dil jo haal hai\n";
    file << "yeah dil hai muskil\n";

    file.close();

    cout << "5 favorite songs saved to my_fav_songs.txt\n";

    return 0;
}
