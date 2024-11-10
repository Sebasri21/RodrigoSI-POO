#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> numbers;
    int num;

    // Pedir n�meros al usuario
    cout << "Ingrese los n�meros (terminar con un n�mero negativo): \n";
    while (cin >> num && num >= 0) {
        numbers.push_back(num);
    }

    // Ordenar la lista de n�meros
    sort(numbers.begin(), numbers.end());

    // Mostrar los n�meros ordenados
    cout << "N�meros ordenados: ";
    for (const auto& n : numbers) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}
