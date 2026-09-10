#include <stdio.h>
int main() {
    char playlistName[] = "My Favorite Songs";
    int totalSongs = 25;
    float averageDuration = 3.75;
    printf("My favorite Spotify playlist is %s, it has %d songs, and the average song duration is %.2f minutes.\n",
           playlistName, totalSongs, averageDuration);
    return 0;
}

