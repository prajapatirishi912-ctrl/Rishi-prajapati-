#include <stdio.h>

float average(int arr[]) {
    int i,sum=0;

 	for(i=0;i<7;i++) {
        sum = sum + arr[i];
    }

    return (float)sum / 7;
}

int main() {
    int orders[7] = {80, 200, 150, 300, 250, 280, 120};

    printf("Average spend = %.2f", average(orders));

    return 0;
}
