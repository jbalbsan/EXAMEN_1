#include <iostream>
#include "promedio_calificaciones.h"
void promedio_calificaciones (double cal1, double cal2, double cal3, double cal4, double cal5, double cal6, double cal7, double cal8)
{
    double promedio = (cal1 + cal2 + cal3 + cal4 + cal5 + cal6 + cal7 + cal8) / 8;
    std::cout << "El promedio de las calificaciones es: " << promedio << std::endl;
}