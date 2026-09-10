#include <stdio.h>
int isEligibleForOffer(int age, float orderValue) {
   return (age >= 18 && orderValue > 500);
}
int main() {
    int age = 20;
    float orderValue = 750;
    if (isEligibleForOffer(age, orderValue)) {
        printf("Eligible for the offer.\n");
    } else {
        printf("Not eligible for the offer.\n");
    }
    return 0;
}

