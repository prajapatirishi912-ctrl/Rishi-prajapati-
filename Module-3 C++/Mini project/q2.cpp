#include <iostream>
#include <fstream>
using namespace std;

class Content {
public:
    char title[50];
    char platform[30];
    int views;
    char status[20];

    void addContent() {
        cout << "Enter Title: ";
        cin >> title;

        cout << "Enter Platform: ";
        cin >> platform;

        cout << "Enter Views: ";
        cin >> views;

        cout << "Enter Status: ";
        cin >> status;
    }

    void saveToFile() {
        ofstream file("content_list.txt", ios::app);

        file << title << " "
             << platform << " "
             << views << " "
             << status << "\n";

        file.close();

        cout << "Content saved successfully.\n";
    }
};

int main() {
    Content c;
    int choice;

    do {
        cout << "\n--- Content Menu ---\n";
        cout << "1. Add Content\n";
        cout << "2. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            c.addContent();
            c.saveToFile();
        }
        else if (choice == 2) {
            cout << "Program ended.\n";
        }
        else {
            cout << "Invalid choice.\n";
        }

    } while (choice != 2);

    return 0;
}
