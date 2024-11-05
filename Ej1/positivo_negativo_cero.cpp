#include <iostream>

#include "positivo_negativo_cero.h"

void positivo_negativo_cero (double numero) {


    if (numero > 0) {
        std::cout << "El número es positivo" << std::endl;
    } else if (numero < 0) {
        std::cout << "El número es negativo" << std::endl;
    } else {
        std::cout << "El número es cero" << std::endl;
    }
}