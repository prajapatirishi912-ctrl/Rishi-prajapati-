#include <stdio.h>
#include <string.h>

#define MAX_TASKS 5

char tasks[MAX_TASKS][100];
int status[MAX_TASKS] = {0};  // 0 = Not Done, 1 = Done
int taskCount = 0;

// Function to add a task
void addTask(char task[]) {
    if (taskCount < MAX_TASKS) {
        strcpy(tasks[taskCount], task);
        taskCount++;
    }
}

// Function to mark a task as DONE
void markTaskDone(int index) {
    if (index >= 0 && index < taskCount) {
        status[index] = 1;
    } else {
        printf("Invalid task index!\n");
    }
}

// Function to display all tasks
void showTasks() {
    int i;

    printf("\nTask List:\n");

    for (i = 0; i < taskCount; i++) {
        printf("%d. %s", i + 1, tasks[i]);

        if (status[i] == 1) {
            printf(" - DONE");
        }

        printf("\n");
    }
}

int main() {

    addTask("Complete C assignment");
    addTask("Practice Git");
    addTask("Learn Python");

    printf("Before marking task as done:");
    showTasks();

    // Mark second task as DONE
    markTaskDone(1);

    printf("\nAfter marking task as done:");
    showTasks();

    return 0;
}
