/* 
Programa que calcula el �rea de pol�gonos seleccionados por el usuario (cuadrado, rect�ngulo y tri�ngulo).
Por: [FRANKLIN BRACAMONTE]
Para: [PROGRAMACION I-UBA]
*/

#include <iostream>

int main() {
    // Declaraci�n de variables
    int opcion;
    double base, altura, lado, area;

    // Men� para que el usuario seleccione el pol�gono
    std::cout << "Seleccione el pol�gono:" << std::endl;
    std::cout << "1. Cuadrado" << std::endl;
    std::cout << "2. Rect�ngulo" << std::endl;
    std::cout << "3. Tri�ngulo" << std::endl;
    std::cin >> opcion;

    // C�lculo del �rea seg�n la opci�n seleccionada
    switch (opcion) {
        case 1: // Cuadrado
            std::cout << "Ingrese el lado del cuadrado: ";
            std::cin >> lado;
            area = lado * lado;
            break;
        case 2: // Rect�ngulo
            std::cout << "Ingrese la base del rect�ngulo: ";
            std::cin >> base;
            std::cout << "Ingrese la altura del rect�ngulo: ";
            std::cin >> altura;
            area = base * altura;
            break;
        case 3: // Tri�ngulo
            std::cout << "Ingrese la base del tri�ngulo: ";
            std::cin >> base;
            std::cout << "Ingrese la altura del tri�ngulo: ";
            std::cin >> altura;
            area = (base * altura) / 2;
            break;
        default:
            std::cout << "Opci�n no v�lida." << std::endl;
            return 1; // Salir del programa con c�digo de error
    }

    // Mostrar el �rea calculada
    std::cout << "El �rea del pol�gono seleccionado es: " << area << std::endl;

    return 0;
}
