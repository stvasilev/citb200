#include "item.h"

Item::Item(const Product &p, int qty) : product(p), quantity(qty) {
    if (qty < 0) quantity = 0;
    else quantity = qty;
}

Product Item::getProduct() {
    return product;
}

int Item::getQuantity() {
    return quantity;
}
