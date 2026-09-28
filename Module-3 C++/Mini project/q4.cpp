#include <iostream>
#include <fstream>
using namespace std;

class Content {
public:
    char title[50];
    char platform[30];
    int views;
    char status[20];
};

void displayAllContent() {
    ifstream file("content_list.txt");

    Content c;
    int number = 1;

    cout << "\n--- Content List ---\n";

    while (file >> c.title >> c.platform >> c.views >> c.status) {
        cout << number << ". "
             << c.title << " - "
             << c.platform << " - "
             << c.status << "\n";

        number++;
    }

    file.close();
}

void updateStatus() {
    Content contents[100];
    int count = 0;

    ifstream file("content_list.txt");

    while (file >> contents[count].title
                >> contents[count].platform
                >> contents[count].views
                >> contents[count].status) {
        count++;
    }

    file.close();

    if (count == 0) {
        cout << "No content found.\n";
        return;
    }

    displayAllContent();

    int choice;
    char newStatus[20];

    cout << "\nEnter content number to update: ";
    cin >> choice;

    if (choice < 1 || choice > count) {
        cout << "Invalid content number.\n";
        return;
    }

    cout << "Enter new status: ";
    cin >> newStatus;

    int i = 0;

    while (newStatus[i] != '\0') {
        contents[choice - 1].status[i] = newStatus[i];
        i++;
    }

    contents[choice - 1].status[i] = '\0';

    ofstream outFile("content_list.txt");

    for (int i = 0; i < count; i++) {
        outFile << contents[i].title << " "
                << contents[i].platform << " "
                << contents[i].views << " "
                << contents[i].status << "\n";
    }

    outFile.close();

    cout << "Status updated successfully.\n";
}

int main() {
    int choice;

    do {
        cout << "\n--- Content Menu ---\n";
        cout << "1. Display Content\n";
        cout << "2. Update Status\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            displayAllContent();
        }
        else if (choice == 2) {
            updateStatus();
        }
        else if (choice == 3) {
            cout << "Program ended.\n";
        }
        else {
            cout << "Invalid choice.\n";
        }

    } while (choice != 3);

    return 0;
}
