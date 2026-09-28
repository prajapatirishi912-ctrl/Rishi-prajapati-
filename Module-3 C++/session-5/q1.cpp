#include <iostream>
using namespace std;

class PaymentProcessor {
public:

    void processPayment(float amount) {
        cout << "Payment method with amount only is called.\n";
        cout << "Final Amount: " << amount << "\n";
    }

    void processPayment(float amount, char couponCode[]) {
        float finalAmount = amount - 100;

        cout << "Payment method with amount and coupon code is called.\n";
        cout << "Coupon Code: " << couponCode << "\n";
        cout << "Final Amount: " << finalAmount << "\n";
    }
};

int main() {
    PaymentProcessor payment;

    float amount;
    char couponCode[50];

    cout << "Enter Amount: ";
    cin >> amount;

    payment.processPayment(amount);

    cout << "\nEnter Coupon Code: ";
    cin >> couponCode;

    payment.processPayment(amount, couponCode);

    return 0;
}
