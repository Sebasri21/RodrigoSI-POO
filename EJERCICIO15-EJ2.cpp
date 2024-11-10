#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> numbers;
    int num;

    // Pedir números al usuario
    cout << "Ingrese los números (terminar con un número negativo): \n";
    while (cin >> num && num >= 0) {
        numbers.push_back(num);
    }

    // Ordenar la lista de números
    sort(numbers.begin(), numbers.end());

    // Mostrar los números ordenados
    cout << "Números ordenados: ";
    for (const auto& n : numbers) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}
