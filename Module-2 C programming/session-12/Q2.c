#include <stdio.h>

struct FoodItem {
    char itemName[50];
    float price;
    float rating;
};

int main() {
    struct FoodItem food[3] = {
        {"Pizza", 299.00, 4.5},
        {"Burger", 149.00, 4.2},
        {"Biryani", 199.00, 4.7}
    };

    int i;

    for (i = 0; i < 3; i++) {
        printf("Item: %s\n", food[i].itemName);
        printf("Price: %.2f\n", food[i].price);
        printf("Rating: %.1f\n\n", food[i].rating);
    }

    return 0;
}
