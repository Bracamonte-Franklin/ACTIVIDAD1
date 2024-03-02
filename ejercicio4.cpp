/* 
Programa que solicita al usuario un n�mero entero positivo y muestra una serie de n�meros en forma descendente.
Por: [FRANKLIN BRACAMONTE]
Para: [PROGRAMACION I-UBA]
*/

#include <iostream>

int main() {
    // Declaraci�n de variables
    int n;

    // Solicitar al usuario un n�mero entero positivo
    std::cout << "Ingrese un n�mero entero positivo: ";
    std::cin >> n;

    // Validar que el n�mero sea positivo
    if (n <= 0) {
        std::cout << "Error: El n�mero debe ser entero positivo." << std::endl;
        return 1; // Salir del programa con c�digo de error
    }

    // Mostrar la serie de n�meros en forma descendente
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
