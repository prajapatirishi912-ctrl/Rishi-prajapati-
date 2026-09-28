#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("wishlist.txt");

    char product[3][100];
    float price[3];

    for (int i = 0; i < 3; i++) {
        cout << "Enter Product " << i + 1 << " Name: ";
        cin >> product[i];

        cout << "Enter Price: ";
        cin >> price[i];

        file << product[i] << " " << price[i] << "\n";
    }

    file.close();

    ifstream readFile("wishlist.txt");

    cout << "\nWishlist:\n";

    for (int i = 0; i < 3; i++) {
        readFile >> product[i] >> price[i];

        cout << "Product: " << product[i]
             << " | Price: " << price[i] << "\n";
    }

    readFile.close();

    return 0;
}
