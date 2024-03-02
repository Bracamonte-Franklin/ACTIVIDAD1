/* 
Programa que calcula el área de polígonos seleccionados por el usuario (cuadrado, rectángulo y triángulo).
Por: [FRANKLIN BRACAMONTE]
Para: [PROGRAMACION I-UBA]
*/

#include <iostream>

int main() {
    // Declaración de variables
    int opcion;
    double base, altura, lado, area;

    // Menú para que el usuario seleccione el polígono
    std::cout << "Seleccione el polígono:" << std::endl;
    std::cout << "1. Cuadrado" << std::endl;
    std::cout << "2. Rectángulo" << std::endl;
    std::cout << "3. Triángulo" << std::endl;
    std::cin >> opcion;

    // Cálculo del área según la opción seleccionada
    switch (opcion) {
        case 1: // Cuadrado
            std::cout << "Ingrese el lado del cuadrado: ";
            std::cin >> lado;
            area = lado * lado;
            break;
        case 2: // Rectángulo
            std::cout << "Ingrese la base del rectángulo: ";
            std::cin >> base;
            std::cout << "Ingrese la altura del rectángulo: ";
            std::cin >> altura;
            area = base * altura;
            break;
        case 3: // Triángulo
            std::cout << "Ingrese la base del triángulo: ";
            std::cin >> base;
            std::cout << "Ingrese la altura del triángulo: ";
            std::cin >> altura;
            area = (base * altura) / 2;
            break;
        default:
            std::cout << "Opción no válida." << std::endl;
            return 1; // Salir del programa con código de error
    }

    // Mostrar el área calculada
    std::cout << "El área del polígono seleccionado es: " << area << std::endl;

    return 0;
}
