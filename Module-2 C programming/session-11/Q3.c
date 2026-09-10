#include <stdio.h>

int main() {
    int orders[5] = {100, 200, 150, 300, 250};
    int *ptr = orders;
    int i;

    for (i=0;i<5;i++) {
        printf("Amount = %d, Address = %p\n", *ptr, (void *)ptr);
        ptr++;
    }

    return 0;
}
