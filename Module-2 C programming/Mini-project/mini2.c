#include <stdio.h>

int main() {

    int music[7] = {0};
    int choice, i;
    int total, highest;
    float average;
    char confirm;

    do {
        printf("\n--- Music Listening Logger ---\n");
        printf("1. Enter Minutes\n");
        printf("2. View Data\n");
        printf("3. Weekly Report\n");
        printf("4. Reset Data\n");
        printf("5. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        // 1. Enter minutes
        if (choice == 1) {

            for(i = 0; i < 7; i++) {
                printf("Day %d minutes: ", i + 1);
                scanf("%d", &music[i]);
            }

            // Save in file
            FILE *f = fopen("music_log.txt", "w");

            for(i = 0; i < 7; i++) {
                fprintf(f, "%d\n", music[i]);
            }

            fclose(f);

            printf("Data saved!\n");
        }

        // 2. View data
        else if(choice == 2) {

            printf("\nYour Music Data:\n");

            for(i = 0; i < 7; i++) {
                printf("Day %d = %d minutes\n",
                       i + 1, music[i]);
            }
        }

        // 3. Weekly report
        else if(choice == 3) {

            FILE *f = fopen("music_log.txt", "r");

            if(f == NULL) {
                printf("No data found!\n");
            }
            else {

                total = 0;
                highest = 0;

                for(i = 0; i < 7; i++) {
                    fscanf(f, "%d", &music[i]);

                    total = total + music[i];

                    if(music[i] > highest) {
                        highest = music[i];
                    }
                }

                fclose(f);

                average = total / 7.0;

                printf("\n--- Weekly Report ---\n");
                printf("Total = %d minutes\n", total);
                printf("Average = %.2f minutes\n", average);
                printf("Highest = %d minutes\n", highest);
            }
        }

        // 4. Reset
        else if(choice == 4) {

            printf("Do you want to delete all data? (y/n): ");
            scanf(" %c", &confirm);

            if(confirm == 'y' || confirm == 'Y') {

                for(i = 0; i < 7; i++) {
                    music[i] = 0;
                }

                FILE *f = fopen("music_log.txt", "w");
                fclose(f);

                printf("Data deleted!\n");
            }
            else {
                printf("Reset cancelled.\n");
            }
        }

        // 5. Exit
        else if(choice == 5) {
            printf("Goodbye!\n");
        }

        else {
            printf("Wrong choice!\n");
        }

    } while(choice != 5);

    return 0;
}
