#include <stdio.h>
#include <string.h>

int main() {
    char a[20], b[20];

    printf("Enter username 1: ");
    scanf("%s", a);

    printf("Enter username 2: ");
    scanf("%s", b);

    if (strcmp(a, b) == 0)
        printf("Same");
    else
        printf("Different");

    return 0;
}
