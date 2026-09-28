#include <iostream>
using namespace std;

class SocialMediaUser {
public:
    char username[50];
    int followers;

    void displayProfile() {
        cout << "\nUsername: " << username << "\n";
        cout << "Followers: " << followers << "\n";
    }
};

class YouTuber : public SocialMediaUser {
public:
    char channelName[50];

    void uploadVideo(char title[]) {
        cout << "Video " << title << " uploaded to " << channelName << "\n";
    }
};

int main() {
    YouTuber y;

    char title[50];

    cout << "Enter Username: ";
    cin >> y.username;

    cout << "Enter Followers: ";
    cin >> y.followers;

    cout << "Enter Channel Name: ";
    cin >> y.channelName;

    cout << "Enter Video Title: ";
    cin >> title;

    y.displayProfile();

    y.uploadVideo(title);

    return 0;
}
