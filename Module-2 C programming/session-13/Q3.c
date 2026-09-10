#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("playlist.txt", "a");

    fprintf(fp, "Blinding Lights\n");
    fprintf(fp, "Despacito\n");

    fclose(fp);

    printf("Two songs added successfully.");

    return 0;
}
