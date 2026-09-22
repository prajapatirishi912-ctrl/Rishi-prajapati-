#include <stdio.h>

struct StudyLog
{
    char subject[40];
    float hours[7];
};

void weeklyReport(struct StudyLog logs[], int subjects)
{
    int i, j;
    float total;
    float average;

    printf("\n========== WEEKLY REPORT ==========\n");

    for (i = 0; i < subjects; i++)
    {
        total = 0;

        for (j = 0; j < 7; j++)
        {
            total = total + logs[i].hours[j];
        }

        average = total / 7;

        printf("\nSubject: %s\n", logs[i].subject);
        printf("Weekly Total: %.2f hours\n", total);
        printf("Daily Average: %.2f hours\n", average);
    }
}
void progressChart(struct StudyLog logs[], int subjects)
{
    int i, j, k;
    int wholeHours;

    printf("\n========== PROGRESS CHART ==========\n");

    for (i = 0; i < subjects; i++)
    {
        printf("\n%s\n", logs[i].subject);

        for (j = 0; j < 7; j++)
        {
            wholeHours = (int)logs[i].hours[j];

            printf("Day %d: ", j + 1);

            for (k = 0; k < wholeHours; k++)
            {
                printf("*");
            }

            printf("\n");
        }
    }
}

int main()
{
    struct StudyLog logs[3];

    int subjects = 3;
    int choice;
    int i, j;
    int day;
    float hours;
    FILE *file;

    printf("Enter name for Subject 1: ");
    scanf(" %[^\n]", logs[0].subject);

    printf("Enter name for Subject 2: ");
    scanf(" %[^\n]", logs[1].subject);

    printf("Enter name for Subject 3: ");
    scanf(" %[^\n]", logs[2].subject);
    for (i = 0; i < subjects; i++)
    {
        for (j = 0; j < 7; j++)
        {
            logs[i].hours[j] = 0;
        }
    }

    do
    {
        printf("\n\n========== STUDENT PRODUCTIVITY TRACKER ==========\n");
        printf("1. Log Today's Study Hours\n");
        printf("2. View Weekly Report\n");
        printf("3. Save & Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("\nEnter day number (1-7): ");
            scanf("%d", &day);

            if (day < 1 || day > 7)
            {
                printf("Invalid day! Please enter 1 to 7.\n");
            }
            else
            {
                for (i = 0; i < subjects; i++)
                {
                    printf("Enter study hours for %s: ",
                           logs[i].subject);

                    scanf("%f", &hours);

                    if (hours < 0 || hours > 24)
                    {
                        printf("Invalid hours! Enter between 0 and 24.\n");
                        i--;
                    }
                    else
                    {
                        logs[i].hours[day - 1] = hours;
                    }
                }

                printf("Study hours logged successfully!\n");
            }
        }


        else if (choice == 2)
        {
            weeklyReport(logs, subjects);
            progressChart(logs, subjects);
        }

        else if (choice == 3)
        {
            file = fopen("productivity_log.txt", "w");

            if (file == NULL)
            {
                printf("Error: Could not open file.\n");
            }
            else
            {
                for (i = 0; i < subjects; i++)
                {
                    fprintf(file, "%s", logs[i].subject);

                    for (j = 0; j < 7; j++)
                    {
                        fprintf(file, ",%.2f", logs[i].hours[j]);
                    }

                    fprintf(file, "\n");
                }

                fclose(file);

                printf("\nAll records saved successfully!\n");
                printf("File: productivity_log.txt\n");
                printf("Program exited.\n");
            }
        }

        else
        {
            printf("Invalid choice! Please select 1, 2, or 3.\n");
        }

    } while (choice != 3);

    return 0;
}
