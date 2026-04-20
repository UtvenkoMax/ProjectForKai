#include <iostream>
#include "Lab4Cpp/Trapezoid.h"

int main() {
    Trapezoid t(0, 0, 3, 4, 5, 7, 4);

    std::cout << "Площа: " << t.area() << std::endl;
    std::cout << "Периметр: " << t.perimeter() << std::endl;

    return 0;
}