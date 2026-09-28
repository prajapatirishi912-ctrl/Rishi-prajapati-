n#include <iostream>
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
};

class Podcaster : public SocialMediaUser {
};

class InstagramInfluencer : public SocialMediaUser {
public:
    void postStory(char storyTitle[]) {
        cout << username << " posted a new story: "
             << storyTitle << "\n";
    }
};

int main() {
    InstagramInfluencer i;

    char storyTitle[50];

    cout << "Enter Username: ";
    cin >> i.username;

    cout << "Enter Followers: ";
    cin >> i.followers;

    cout << "Enter Story Title: ";
    cin >> storyTitle;

    i.displayProfile();

    i.postStory(storyTitle);

    return 0;
}
