#include <stdio.h>

// Create Student structure
struct Student
{
    char name[50];
    int rollno;
    float marks;
    char grade;
};

// Function to assign grade
void assignGrade(struct Student *s)
{
    if (s->marks >= 90)
    {
        s->grade = 'A';
    }
    else if (s->marks >= 75)
    {
        s->grade = 'B';
    }
    else if (s->marks >= 60)
    {
        s->grade = 'C';
    }
    else if (s->marks >= 45)
    {
        s->grade = 'D';
    }
    else
    {
        s->grade = 'F';
    }
}

// Function to find and print topper
void printTopper(struct Student students[], int n)
{
    int top = 0;

    for (int i = 1; i < n; i++)
    {
        if (students[i].marks > students[top].marks)
        {
            top = i;
        }
    }

    printf("\nTop Performer:\n");
    printf("Name: %s\n", students[top].name);
    printf("Marks: %.2f\n", students[top].marks);
}

int main()
{
    struct Student students[3];

    // Accept data for 3 students
    for (int i = 0; i < 3; i++)
    {
        printf("\nEnter details for Student %d\n", i + 1);

        printf("Enter name: ");
        scanf(" %[^\n]", students[i].name);

        printf("Enter roll number: ");
        scanf("%d", &students[i].rollno);

        printf("Enter marks: ");
        scanf("%f", &students[i].marks);

        // Assign grade
        assignGrade(&students[i]);
    }

    // Display table
    printf("\n--------------------------------------------------\n");
    printf("%-20s %-10s %-10s %-5s\n",
           "Name", "Roll No", "Marks", "Grade");
    printf("--------------------------------------------------\n");

    for (int i = 0; i < 3; i++)
    {
        printf("%-20s %-10d %-10.2f %-5c\n",
               students[i].name,
               students[i].rollno,
               students[i].marks,
               students[i].grade);
    }

    printf("--------------------------------------------------\n");

    // Print topper
    printTopper(students, 3);

    return 0;
}
