#include <iostream>

using namespace std;

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
        cout << "Ingresa el primer n�mero: ";
        cin >> num1;
        cout << "Ingresa el segundo n�mero: ";
        cin >> num2;

        // Calcular la suma
        double resultado = suma(num1, num2);
        cout << "La suma es: " << resultado <<endl;

        // Preguntar si desea continuar
        cout << "�Deseas continuar? (s/n): ";
        cin >> continuar;
    } while (continuar == 's' || continuar == 'S');

return 0;
}
