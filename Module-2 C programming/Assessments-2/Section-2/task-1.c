#include <stdio.h>

int main() {
    float percentage;

    printf("Enter your percentage: ");
    scanf("%f", &percentage);

    if (percentage < 0 || percentage > 100) {
        printf("Error: Percentage must be between 0 and 100.\n");
        return 0;
    }

    if (percentage >= 90) {
        printf("A — Excellent work! Keep it up.\n");
    }
    else if (percentage >= 75) {
        printf("B — Good work! Keep pushing.\n");
    }
    else if (percentage >= 60) {
        printf("C — Nice effort! Keep improving.\n");
    }
    else if (percentage >= 45) {
        printf("D — You passed! Work harder next time.\n");
    }
    else {
        printf("F — Don't give up! Keep practicing.\n");
    }

    return 0;
}
