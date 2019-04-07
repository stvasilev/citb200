#include "textprinter.h"
#include <iostream>

using std::endl;

void TextPrinter::print(std::ostream &out, Invoice invoice) {
    for (auto item : invoice.getItems()) {
        out << item.getQuantity() << " "
            << item.getProduct().getName() << " x"
            << " (" << item.getProduct().getPrice() << ") "
            << " = " << invoice.computeItemTotal(item)  
            << endl;
    }

}