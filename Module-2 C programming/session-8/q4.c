#include <stdio.h>

void formatPrice(int price)
{
    printf("?%d\n", price);
}

int main()
{
    printf("Mobile: ");
    formatPrice(1599);

    printf("Headphones: ");
    formatPrice(2499);

    printf("Keyboard: ");
    formatPrice(999);

    return 0;
}
