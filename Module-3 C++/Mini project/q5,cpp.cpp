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

void deleteContent() {
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

    cout << "\nEnter content number to delete: ";
    cin >> choice;

    if (choice < 1 || choice > count) {
        cout << "Invalid content number.\n";
        return;
    }

    for (int i = choice - 1; i < count - 1; i++) {
        contents[i] = contents[i + 1];
    }

    count--;

    ofstream outFile("content_list.txt");

    for (int i = 0; i < count; i++) {
        outFile << contents[i].title << " "
                << contents[i].platform << " "
                << contents[i].views << " "
                << contents[i].status << "\n";
    }

    outFile.close();

    cout << "\nContent deleted successfully.";

    displayAllContent();
}

int main() {
    int choice;

    do {
        cout << "\n\n--- Content Menu ---\n";
        cout << "1. Display Content\n";
        cout << "2. Delete Content\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            displayAllContent();
        }
        else if (choice == 2) {
            deleteContent();
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
