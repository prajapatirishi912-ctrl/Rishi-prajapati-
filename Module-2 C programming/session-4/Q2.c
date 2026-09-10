#include <stdio.h>
int main() {
    float productPrice = 1000.0;
    float discountPercentage = 10.0;
    float discountAmount, finalPrice;
    int isMember = 1;  // 1 = true, 0 = false
    // Calculate normal discount
    discountAmount = (productPrice * discountPercentage) / 100;
    finalPrice = productPrice - discountAmount;
    // Apply extra 5% discount for members
    if (isMember == 1) {
        finalPrice = finalPrice - (finalPrice * 5 / 100);
    }
    printf("Product Price: %.2f\n", productPrice);
    printf("Discount: %.2f%%\n", discountPercentage);
    printf("Member: %s\n", isMember ? "Yes" : "No");
    printf("Final Price: %.2f\n", finalPrice);

    return 0;
}

