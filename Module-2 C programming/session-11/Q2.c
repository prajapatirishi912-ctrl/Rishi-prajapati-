#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int playlist1 = 20;
    int playlist2 = 30;

    swap(&playlist1, &playlist2);

    printf("Playlist 1 = %d\n", playlist1);
    printf("Playlist 2 = %d\n", playlist2);
    return 0;
}
