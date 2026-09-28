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

class Podcaster : public SocialMediaUser {
public:
    char podcastName[50];

    void publishEpisode(char episodeTitle[]) {
        cout << "Episode " << episodeTitle
             << " published on " << podcastName << "\n";
    }
};

int main() {
    Podcaster p;

    char episodeTitle[50];

    cout << "Enter Username: ";
    cin >> p.username;

    cout << "Enter Followers: ";
    cin >> p.followers;

    cout << "Enter Podcast Name: ";
    cin >> p.podcastName;

    cout << "Enter Episode Title: ";
    cin >> episodeTitle;

    p.displayProfile();

    p.publishEpisode(episodeTitle);

    return 0;
}
