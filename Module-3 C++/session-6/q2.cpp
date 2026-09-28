#include <iostream>
using namespace std;

class InstaStory {
protected:
    int storyViews;
};

class SponsoredStory : public InstaStory {
public:
    void setViews(int views) {
        storyViews = views;
    }

    void displayViews() {
        cout << "Story Views: " << storyViews << "\n";
    }
};

int main() {
    SponsoredStory story;

    int views;

    cout << "Enter Story Views: ";
    cin >> views;

    story.setViews(views);
    story.displayViews();

    return 0;
}
