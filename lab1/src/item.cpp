#include "item.h"

Item::Item(Product p, int qty) : product(p), quantity(qty) {
    if (qty < 0) quantity = 0;
}

Product Item::getProduct() {
    return product;
}