#include <iostream>
#include "promo.h"


void promocion2_1 (double precio1, double precio2, double precio3, double precio_final){


    if (precio1 <= precio2 && precio1 <= precio3) {
        std::cout << "El precio más barato es: " << precio1 << std::endl;
        precio_final = precio2 + precio3;
        std::cout << "El precio final con la promoción es= € " << precio_final << std::endl;


    } else if (precio2 <= precio1 && precio2 <= precio3) {
        std::cout << "El precio más barato es: " << precio2 << std::endl;
        precio_final = precio1 + precio3;
        std::cout << "El precio final con la promoción es= € " << precio_final << std::endl;

    } else {
        std::cout << "El precio más barato es: " << precio3 << std::endl;
        precio_final = precio1 + precio2;
        std::cout << "El precio final con la promoción es= € " << precio_final << std::endl;
    }

}