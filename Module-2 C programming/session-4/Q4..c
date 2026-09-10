#include <stdio.h>
int main() {
    int likes = 1200;
    int comments = 150;
    int shares = 60;
    if (likes >= 1000 || (comments > 200 && shares >= 50)) {
        printf("The post is trending on Instagram.\n");
    } else {
        printf("The post is not trending on Instagram.\n");
    }
    return 0;
}

