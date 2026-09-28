#include <iostream>
#include <fstream>
using namespace std;

class Content {
public:
    char title[50];
    char platform[30];
    int views;
    char status[20];

    void displayContent() {
        cout << "Title: " << title << "\n";
        cout << "Platform: " << platform << "\n";
    }
};

void displayAllContent() {
    ifstream file("content_list.txt");

    Content c;
    int number = 1;

    cout << "\n--- Content List ---\n";

    while (file >> c.title >> c.platform >> c.views >> c.status) {
        cout << number << ". ";
        c.displayContent();
        number++;
    }

    file.close();
}

int main() {
    displayAllContent();

    return 0;
}
