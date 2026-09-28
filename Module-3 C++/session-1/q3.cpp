#include <iostream>
#include <cstring>
using namespace std;

class Task {
public:
    char title[100];
    int isDone = 0;

    void markDone() {
        isDone = 1;
    }

    void display() {
        cout << title;

        if (isDone == 1)
            cout << " - DONE";
        else
            cout << " - NOT DONE";

        cout << endl;
    }
};

int main() {

    Task task1, task2, task3;

    strcpy(task1.title, "Complete C++ assignment");
    strcpy(task2.title, "Practice Git");
    strcpy(task3.title, "Learn Python");

    task2.markDone();

    task1.display();
    task2.display();
    task3.display();

    return 0;
}
