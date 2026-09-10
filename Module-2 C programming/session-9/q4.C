#include <stdio.h>

int main() {
    int cricketScores[3][2] = {
        {180, 165},
        {150, 175},
        {200, 190}
    };

    int i;

    for (i = 0; i < 3; i++) {
        if (cricketScores[i][0] > cricketScores[i][1]) {
            printf("Match %d highest score = %d\n", i + 1, cricketScores[i][0]);
        } else {
            printf("Match %d highest score = %d\n", i + 1, cricketScores[i][1]);
        }
    }

    return 0;
}
