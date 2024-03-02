/* Programa que solicita al usuario introducir el número de un mes (1 a 12) y el año,
   y luego muestra el número de días de ese mes.
   Por: [FRANKLIN BRACAMONTE]
   Para: [PROGRAMACION I-UBA]
*/

#include <iostream>

int main() {
    // Declaración de variables
    int mes, anio, dias;

    // Lectura del número de mes
    std::cout << "Ingrese el número de mes (1 a 12): ";
    std::cin >> mes;

    // Validar que el mes esté dentro del rango válido
    if (mes < 1 || mes > 12) {
        std::cout << "Error: El número de mes debe estar entre 1 y 12." << std::endl;
        return 1; // Salir del programa con código de error
    }

    // Lectura del año
    std::cout << "Ingrese el año: ";
    std::cin >> anio;

    // Calcular el número de días del mes
    switch (mes) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            dias = 31;
            break;
        case 4: case 6: case 9: case 11:
            dias = 30;
            break;
        case 2:
            // Comprobar si el año es bisiesto
            if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0))
                dias = 29;
            else
                dias = 28;
            break;
    }

    // Mostrar el número de días del mes
    std::cout << "El mes " << mes << " del año " << anio << " tiene " << dias << " días." << std::endl;

    return 0;
}

