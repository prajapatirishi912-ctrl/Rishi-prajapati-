#include <stdio.h>
int main() {
    FILE *file;
    file = fopen("playlist.txt", "w");
    fprintf(file, "Perfect\n");
    fprintf(file, "Shape of You\n");
    fprintf(file, "Believer\n");
    fclose(file);
    printf("Songs written to playlist.txt");
    return 0;
}

