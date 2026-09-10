#include <stdio.h>
int main() {
    int followerCount = 100;
    printf("Initial follower count: %d\n", followerCount);
    // Pre-increment
    printf("Pre-increment (++count): %d\n", ++followerCount);
    printf("After pre-increment: %d\n", followerCount);
    // Reset value
    followerCount = 100;
    // Post-increment
    printf("Post-increment (count++): %d\n", followerCount++);
    printf("After post-increment: %d\n", followerCount);
    return 0;
}

