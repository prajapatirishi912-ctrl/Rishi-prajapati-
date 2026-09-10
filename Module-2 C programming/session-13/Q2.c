#include <stdio.h>

int main() {
    FILE *fp;
    char song[100];

    fp = fopen("playlist.txt", "r");

    while (fgets(song, 100, fp) != NULL) {
        printf("%s", song);
    }

    fclose(fp);

    return 0;
}
