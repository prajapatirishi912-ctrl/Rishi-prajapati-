#include <stdio.h>

int main() {
    int likes =3000;
    int *ptrLikes = &likes;

    printf("Likes = %d\n", likes);
    printf("Address = %p", ptrLikes);

    return 0;
}
