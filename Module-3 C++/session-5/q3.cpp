#include <iostream>
using namespace std;

class FlipkartSearch {
public:

    void searchProduct(char productName[]) {
        cout << "Searching by Product Name: " << productName << "\n";
        cout << "Product found successfully.\n";
    }

    void searchProduct(char productName[], char category[]) {
        cout << "Searching by Product Name: " << productName << "\n";
        cout << "Category: " << category << "\n";
        cout << "Product found in the selected category.\n";
    }
};

int main() {
    FlipkartSearch search;

    char productName[50];
    char category[50];

    cout << "Enter Product Name: ";
    cin >> productName;

    search.searchProduct(productName);

    cout << "\nEnter Product Name: ";
    cin >> productName;

    cout << "Enter Category: ";
    cin >> category;

    search.searchProduct(productName, category);

    return 0;
}
