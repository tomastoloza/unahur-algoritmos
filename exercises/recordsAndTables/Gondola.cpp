#include "Gondola.h"

void Gondola::addProduct(const string name, const string barcode, double price, bool onSale) {
    if (products.size() < 50) {
        Product product(name, barcode, price, onSale);
        products.push_back(product);
    } else {
        cout << "Gondola is full. Cannot add more products." << endl;
    }
}


Product Gondola::findProductByName(const string name) {
    for (const Product product: products) {
        if (product.name == name) {
            return product;
        }
    }
    throw runtime_error("Product not found");
}

Product Gondola::findProductByBarcode(const string barcode) {
    for (const Product product: products) {
        if (product.barcode == barcode) {
            return product;
        }
    }
    throw runtime_error("Product not found");
}


void Gondola::modifyPriceByBarcode(const string barcode, double newPrice) {
    for (Product product: products) {
        if (product.barcode == barcode) {
            product.price = newPrice;
            return;
        }
    }
    cout << "Product not found" << endl;
}


void Gondola::removeProductByName(const string name) {
    for (auto it = products.begin(); it != products.end(); ++it) {
        if (it->name == name) {
            products.erase(it);
            return;
        }
    }
    cout << "Product not found" << endl;
}


int Gondola::countProductsOnSale() {
    int count = 0;
    for (const Product product: products) {
        if (product.onSale) {
            count++;
        }
    }
    return count;
}

void Gondola::loadProductsIntoChango(vector<Product> chango, double totalAmount, double totalSavings) {
    for (const Product product: products) {
        chango.push_back(product);
        totalAmount += product.getDiscountedPrice();
        totalSavings += product.price - product.getDiscountedPrice();
    }
}