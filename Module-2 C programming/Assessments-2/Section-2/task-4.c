#include <stdio.h>

struct Expense
{
    char category[30];
    float amount;
};

int main()
{
    struct Expense expenses[10];
    int choice;
    int count = 0;
    int i;
    float total;

    do
    {
        printf("\n===== Expense Tracker =====\n");
        printf("1. Add Expense\n");
        printf("2. View All Expenses\n");
        printf("3. Save & Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            if (count >= 10)
            {
                printf("Expense limit reached!\n");
            }
            else
            {
                printf("Enter category: ");
                scanf(" %[^\n]", expenses[count].category);

                printf("Enter amount: ");
                scanf("%f", &expenses[count].amount);

                printf("Expense added successfully!\n");

                count++;
            }
        }

        else if (choice == 2)
        {
            if (count == 0)
            {
                printf("No expenses recorded yet.\n");
            }
            else
            {
                total = 0;

                printf("\n===== All Expenses =====\n");
                printf("%-20s %-10s\n", "Category", "Amount");
                printf("-------------------------------\n");

                for (i = 0; i < count; i++)
                {
                    printf("%-20s %.2f\n",
                           expenses[i].category,
                           expenses[i].amount);

                    total = total + expenses[i].amount;
                }

                printf("-------------------------------\n");
                printf("Total: %.2f\n", total);
            }
        }

        else if (choice == 3)
        {
            FILE *file;

            file = fopen("expenses.txt", "w");

            if (file == NULL)
            {
                printf("Error: Could not open file.\n");
            }
            else
            {
                for (i = 0; i < count; i++)
                {
                    fprintf(file, "%s,%.2f\n",
                            expenses[i].category,
                            expenses[i].amount);
                }

                fclose(file);

                printf("Expenses saved successfully!\n");
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
