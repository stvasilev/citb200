#include "textprinter.h"
#include <iostream>

using std::endl;

void TextPrinter::print(std::ostream &out, Invoice invoice) {
    for (auto product : invoice.getProducts()) {
        out << product.getName() << " (" << product.getPrice() << ") " << endl;
    }
}