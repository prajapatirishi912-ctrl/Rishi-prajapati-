#include <stdio.h>
#include <stdlib.h>
#define DAYS 7
void logMusic(int minutes[]) {
    FILE *fp;
    int i;
    printf("\n Enter listening minutes for each day:\n");
    for (i = 0; i < DAYS; i++) {
        printf("Day %d: ", i + 1);
        scanf("%d", &minutes[i]);
    }
    fp = fopen("music_log.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }
    for (i = 0; i < DAYS; i++) {
        fprintf(fp, "%d\n", minutes[i]);
    }
    fclose(fp);
    printf("\nMusic listening data saved successfully!\n");
}
void viewSummary() {
    FILE *fp;
    int minutes[DAYS];
    int i, total = 0, highest = 0;
    float average;
    fp = fopen("music_log.txt", "r");
    if (fp == NULL) {
        printf("\n No music data found.\n");
        return;
    }
    for (i=0;i<DAYS; i++) {
        if (fscanf(fp,"%d", &minutes[i]) != 1) {
            minutes[i]= 0;
        }
        total += minutes[i];
        if (minutes[i] > highest) {
            highest = minutes[i];
        }
    }
    fclose(fp);
    average = total / 7.0;
    printf("\n----- Weekly Music Report -----\n");
    printf("Total Listening Minutes   : %d\n", total);
    printf("Average Listening Minutes : %.2f\n", average);
    printf("Highest Listening Minutes : %d\n", highest);
    printf("\nDaily Listening:\n");
    for (i = 0; i < DAYS; i++) {
        printf("Day %d: %d minutes\n", i + 1, minutes[i]);
    }
}
void resetData(int minutes[]) {
    char choice;
    int i;
    FILE *fp;

    printf("\nAre you sure you want to reset all data? (y/n): ");
    scanf(" %c", &choice);
    if (choice == 'y' || choice == 'Y') {
        for ( i = 0; i < DAYS; i++) {
            minutes[i] = 0;
        }
        fp = fopen("music_log.txt", "w");
        if (fp != NULL) {
            fclose(fp);
        }
        printf("Weekly data has been reset successfully!\n");
    } else {
        printf("Reset cancelled.\n");
    }
}
int main() {
    int minutes[DAYS] = {0};
    int choice;
    printf("------------------------------------\n");
    printf("     MUSIC LISTENING LOGGER\n");
    printf("------------------------------------\n");
    do {
        printf("\n----- MENU -----\n");
        printf("1. Log New Listening Minutes\n");
        printf("2. View Weekly Summary\n");
        printf("3. Reset Weekly Data\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice){
            case 1:
                logMusic(minutes);
                break;
            case 2:
                viewSummary();
                break;
            case 3:
                resetData(minutes);
                break;
            case 4:
                printf("\nThank you for using Music Listening Logger!\n");
                break;
            default:
                printf("\nInvalid choice! Please try again.\n");
        }
    } while (choice != 4);
}
