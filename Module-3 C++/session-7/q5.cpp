#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("insta_followers.txt");

    char username[100];
    int count = 0;

    while (file.getline(username, 100)) {
        count++;
    }

    file.close();

    cout << "Total Followers: " << count << "\n";

    return 0;
}
