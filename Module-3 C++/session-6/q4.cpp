#include <iostream>
using namespace std;

class Product {
public:
    virtual void upload() = 0;
};

class Electronics : public Product {
public:
    void upload() override {
        cout << "Uploading Electronics product to Flipkart.\n";
    }
};

class Clothing : public Product {
public:
    void upload() override {
        cout << "Uploading Clothing product to Flipkart.\n";
    }
};

int main() {
    Electronics e;
    Clothing c;

    e.upload();
    c.upload();

    return 0;
}
