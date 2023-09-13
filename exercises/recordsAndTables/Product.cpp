//
// Created by ttoloza on 12/09/2023.
//


#include "Product.h"

double Product::getDiscountedPrice() {
    return onSale ? price * 0.9 : price;
}