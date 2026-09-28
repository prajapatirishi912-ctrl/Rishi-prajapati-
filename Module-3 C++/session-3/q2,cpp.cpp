#include <iostream>
using namespace std;

class Product {
public:
    char productName[50];
    float price,rating;

    // Parameterized constructor
    Product(char name[], float p, float r) {
        int i = 0;

        while (name[i] != '\0') {
            productName[i] = name[i];
            i++;
        }

        productName[i] = '\0';

        price = p;
        rating = r;
    }

    void displayInfo() {
        cout << "\nProduct Name: " << productName << "\n";
        cout << "Price: " << price << "\n";
        cout << "Rating: " << rating << "\n";
    }
};

int main() {
    char name[50];
    float price;
    float rating;

    cout << "Enter Product Name: ";
    cin >> name;

    cout << "Enter Price: ";
    cin >> price;

    cout << "Enter Rating: ";
    cin >> rating;

    Product p(name, price, rating);

    p.displayInfo();

    return 0;
}
