#include <iostream>
using namespace std;

class FoodOrder {
public:
    int orderId;
    char restaurantName[50];
    int isDelivered;

    // Constructor takes an object as parameter
    FoodOrder(FoodOrder &order) {
        orderId = order.orderId;
        isDelivered = order.isDelivered;

        for (int i = 0; order.restaurantName[i] != '\0'; i++) {
            restaurantName[i] = order.restaurantName[i];
            restaurantName[i + 1] = '\0';
        }
    }

    // Default constructor
    FoodOrder() {
        orderId = 0;
        restaurantName[0] = '\0';
        isDelivered = 0;
    }

    void showOrder() {
        cout << "Order ID: " << orderId << "\n";
        cout << "Restaurant Name: " << restaurantName << "\n";
        cout << "Delivered: ";

        if (isDelivered == 1)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
};

int main() {
    FoodOrder order1;

    order1.orderId = 101;

    char name[] = "PizzaHut";

    for (int i = 0; name[i] != '\0'; i++) {
        order1.restaurantName[i] = name[i];
        order1.restaurantName[i + 1] = '\0';
    }

    order1.isDelivered = 0;

    // Passing an object to the constructor
    FoodOrder order2(order1);

    order2.showOrder();

    return 0;
}
