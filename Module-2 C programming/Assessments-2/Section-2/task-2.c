#include <stdio.h>

int main()
{
    float studyhr[7];
    float sum = 0, avg = 0, max;
    int i, j;

   
    for(i = 0; i < 7; i++)
    {
        while(1)
        {
            printf("\nEnter the study hours of day %d: ", i + 1);
            scanf("%f", &studyhr[i]);

           
            if(studyhr[i] >= 0 && studyhr[i] <= 24)
            {
                break;
            }
            else
            {
                printf("Invalid input! Enter hours between 0 and 24.\n");
            }
        }

        sum = sum + studyhr[i];
    }

 
    avg = sum / 7;

    
    max = studyhr[0];

    for(i = 1; i < 7; i++)
    {
        if(studyhr[i] > max)
        {
            max = studyhr[i];
        }
    }

   
    printf("\n\nStudy Hours Bar:\n");

    for(i = 0; i < 7; i++)
    {
        printf("Day %d: ", i + 1);

        
        for(j = 0; j < studyhr[i]; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    
    printf("\nThe weekly total hours is = %.2f", sum);
    printf("\nThe daily average hours is = %.2f", avg);
    printf("\nThe maximum study hours is = %.2f\n", max);

    return 0;
}
