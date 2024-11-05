#include <iostream>
#include "promedio_calificaciones.h"

int main()
{
    double cal1, cal2, cal3, cal4, cal5, cal6, cal7, cal8;
    std::cout << "A continuación vas a introducir las calificaciones de cada una de tus 8 pruebas: " << std::endl;

    std::cout << "Introduce la calificación de la (1º) primera prueba: ";
    std::cin >> cal1;

    std::cout << "Introduce la calificación de la (2º) segunda prueba: ";
    std::cin >> cal2;

    std::cout << "Introduce la calificación de la (3º) tercera prueba: ";
    std::cin >> cal3;

    std::cout << "Introduce la calificación de la (4º) cuarta prueba: ";
    std::cin >> cal4;

    std::cout << "Introduce la calificación de la (5º) quinta prueba: ";
    std::cin >> cal5;

    std::cout << "Introduce la calificación de la (6º) sexta prueba: ";
    std::cin >> cal6;

    std::cout << "Introduce la calificación de la (7º) séptima prueba: ";
    std::cin >> cal7;

    std::cout << "Introduce la calificación de la (8º) octava prueba: ";
    std::cin >> cal8;

    promedio_calificaciones(cal1, cal2, cal3, cal4, cal5, cal6, cal7, cal8);

    return 0;
}
