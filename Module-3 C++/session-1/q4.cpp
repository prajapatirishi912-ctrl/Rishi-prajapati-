#include <iostream>
#include <cstring>
using namespace std;

class Task {
public:
    char title[50];
    int isDone;

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

class TaskList {
public:
    Task tasks[5];
    int count = 0;

    void addTask(const char title[]) {
        strcpy(tasks[count].title, title);
        tasks[count].isDone = 0;
        count++;
    }

    void markTaskDone(int index) {
        tasks[index].markDone();
    }

    void showTasks() {
        for (int i = 0; i < count; i++) {
            cout << i + 1 << ". ";
            tasks[i].display();
        }
    }
};

int main() {

    TaskList list;

    // Add 3 tasks
    list.addTask("Complete C++ assignment");
    list.addTask("Practice Git");
    list.addTask("Learn Python");

    // Mark second task as done
    list.markTaskDone(1);

    // Display all tasks
    list.showTasks();

    return 0;
}
