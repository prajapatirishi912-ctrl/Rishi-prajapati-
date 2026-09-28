#include <iostream>
using namespace std;

class FoodOrder {
public:
    int orderId;
    char restaurantName[50];
    int isDelivered;

    void markDelivered() {
        isDelivered = 1;
        cout << "Order has been delivered!\n";
    }
};

int main() {
    FoodOrder order;

    cout << "Enter Order ID: ";
    cin >> order.orderId;

    cout << "Enter Restaurant Name: ";
    cin >> order.restaurantName;

    order.isDelivered = 0;

    cout << "\nOrder ID: " << order.orderId << "\n";
    cout << "Restaurant Name: " << order.restaurantName << "\n";

    order.markDelivered();

    cout << "Delivered: ";

    if (order.isDelivered == 1)
        cout << "Yes\n";
    else
        cout << "No\n";

    return 0;
}
