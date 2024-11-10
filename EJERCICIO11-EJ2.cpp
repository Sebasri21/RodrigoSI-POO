#include <iostream>
#include <vector>
#include <string>

// Función para imprimir una matriz 3x3
void imprimirMatriz(int matriz[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

// Función para sumar dos matrices 3x3
void sumarMatrices(int matriz1[3][3], int matriz2[3][3], int resultado[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

int main() {
    // 1. Arreglo estático de cadenas
    std::string nombres[3] = {"Alice", "Bob", "Charlie"};
    std::cout << "Arreglo estático de cadenas: ";
    for (const std::string& nombre : nombres) {
        std::cout << nombre << " ";
    }
    std::cout << std::endl;

    // 2. Arreglo dinámico de enteros
    std::vector<int> numeros;

    // Agregar elementos
    numeros.push_back(10);
    numeros.push_back(20);
    numeros.push_back(30);

    // Eliminar el segundo elemento
    numeros.erase(numeros.begin() + 1);

    // Actualizar el primer elemento
    numeros[0] = 100;

    std::cout << "Arreglo dinámico de enteros: ";
    for (int numero : numeros) {
        std::cout << numero << " ";
    }
    std::cout << std::endl;

    // 3. Arreglo multidimensional (matriz 3x3)
    int matriz1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int matriz2[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    int resultado[3][3] = {0};

    sumarMatrices(matriz1, matriz2, resultado);

    std::cout << "Resultado de la suma de matrices 3x3:" << std::endl;
    imprimirMatriz(resultado);

return 0;
}
