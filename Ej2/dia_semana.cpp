
#include <iostream>
#include "dia_semana.h"

void dia_semana (int dia)
{
    switch (dia)
    {
    case 1:
        std::cout << "Lunes" << std::endl;
        break;
    case 2:
        std::cout << "Martes" << std::endl;
        break;
    case 3:
        std::cout << "Miércoles" << std::endl;
        break;
    case 4:
        std::cout << "Jueves" << std::endl;
        break;
    case 5:
        std::cout << "Viernes" << std::endl;
        break;
    case 6:
        std::cout << "Sábado" << std::endl;
        break;
    case 7:
        std::cout << "Domingo" << std::endl;
        break;
    default:
        std::cout << "Número de día inválido" << std::endl;
        break;
    }
  }
