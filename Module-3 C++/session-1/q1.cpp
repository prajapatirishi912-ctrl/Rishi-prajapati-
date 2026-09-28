#include <stdio.h>

char tasks[5][100];   
int taskCount = 0;

int main() {
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter task %d: ", i + 1);
        fgets(tasks[i], 100, stdin);

        taskCount++;
    }

    printf("\n--- Task List ---\n");

    for (i = 0; i < taskCount; i++) {
        printf("%d. %s", i + 1, tasks[i]);
    }
	
    return 0;
}
