#include <stdio.h>

struct Bio {
    char description[50];
    int age;
};

struct InstaProfile {
    char username[20];
    int followers;
    struct Bio bio;
};

int main() {

    struct InstaProfile p = {"rishi", 1000, {"python", 20}};

    printf("Username: %s\n", p.username);
    printf("Followers: %d\n", p.followers);
    printf("Bio: %s\n", p.bio.description);
    printf("Age: %d\n", p.bio.age);

    return 0;
}
