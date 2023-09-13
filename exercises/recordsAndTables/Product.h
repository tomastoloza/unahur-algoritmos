//
// Created by ttoloza on 12/09/2023.
//

#ifndef UNAHUR_ALGORITMOS_PRODUCT_H
#define UNAHUR_ALGORITMOS_PRODUCT_H


#include <iostream>

#include <vector>
#include <string>

using namespace std;

// Define the Product struct
struct Product {
    string name;
    string barcode;
    double price;
    bool onSale;

public:
    Product(string n, string code, double p, bool sale)
            : name(n), barcode(code), price(p), onSale(sale) {}

    double getDiscountedPrice();

};


#endif //UNAHUR_ALGORITMOS_PRODUCT_H
