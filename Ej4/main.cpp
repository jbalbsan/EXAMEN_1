#include <iostream>
#include "promo.h"

int main() {
    double precio1, precio2, precio3, precio_final;

    std::cout << "Ingrese el primer precio: ";
    std::cin >> precio1;
    std::cout << "Ingrese el segundo precio: ";
    std::cin >> precio2;
    std::cout << "Ingrese el tercer precio: ";
    std::cin >> precio3;

    promocion2_1(precio1, precio2, precio3, precio_final);


    return 0;
}
