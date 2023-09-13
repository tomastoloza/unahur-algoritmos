//
// Created by ttoloza on 12/09/2023.
//

#ifndef UNAHUR_ALGORITMOS_GONDOLA_H
#define UNAHUR_ALGORITMOS_GONDOLA_H


#include "Product.h"

// Define the Gondola class
class Gondola {
private:
    vector<Product> products;

public:
    void addProduct(const string name, const string barcode, double price, bool onSale);

    Product findProductByName(const string name);

    Product findProductByBarcode(const string barcode);

    void modifyPriceByBarcode(const string barcode, double newPrice);

    void removeProductByName(const string name);

    int countProductsOnSale();

    void loadProductsIntoChango(vector<Product> chango, double totalAmount, double totalSavings);

};


#endif //UNAHUR_ALGORITMOS_GONDOLA_H
