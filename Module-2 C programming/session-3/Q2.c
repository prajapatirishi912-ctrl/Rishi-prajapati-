#include <stdio.h>
int main() {
    const float GST_RATE = 18.0;   // Constant GST rate (cannot be changed)
    float basePrice = 500.0;
    float gstAmount, finalPrice;
    gstAmount = (basePrice * GST_RATE) / 100;
    finalPrice = basePrice + gstAmount;
    printf("Base Price: %.2f\n", basePrice);
    printf("GST Rate: %.2f%%\n", GST_RATE);
    printf("GST Amount: %.2f\n", gstAmount);
    printf("Final Price: %.2f\n", finalPrice);
    return 0;}

