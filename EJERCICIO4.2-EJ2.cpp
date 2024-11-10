#include <iostream>

// Plantilla de funci�n para la suma
template <typename T>
T suma(T& a, T& b) {
    return a + b;
}

int main() {
    char continuar;
    do {
        // Solicitar n�meros al usuario
        double num1, num2;
        std::cout << "Ingresa el primer n�mero: ";
        std::cin >> num1;
        std::cout << "Ingresa el segundo n�mero: ";
        std::cin >> num2;

        // Calcular la suma
        double resultado = suma(num1, num2);
        std::cout << "La suma es: " << resultado << std::endl;

        // Preguntar si desea continuar
        std::cout << "�Deseas continuar? (s/n): ";
        std::cin >> continuar;
    } while (continuar == 's' || continuar == 'S');

return 0;
}
