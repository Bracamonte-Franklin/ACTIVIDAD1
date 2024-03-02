/* 
Programa que solicita al usuario un número entero positivo y muestra una serie de números en forma descendente.
Por: [FRANKLIN BRACAMONTE]
Para: [PROGRAMACION I-UBA]
*/

#include <iostream>

int main() {
    // Declaración de variables
    int n;

    // Solicitar al usuario un número entero positivo
    std::cout << "Ingrese un número entero positivo: ";
    std::cin >> n;

    // Validar que el número sea positivo
    if (n <= 0) {
        std::cout << "Error: El número debe ser entero positivo." << std::endl;
        return 1; // Salir del programa con código de error
    }

    // Mostrar la serie de números en forma descendente
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
