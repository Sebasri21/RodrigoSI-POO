#include <iostream>
#include <iomanip>  // Para std::setw y std::setprecision

using namespace std;

int main() {
    string nombreProducto;
    double precioUnitario;
    int numeroUnidades;

    // Solicitar datos al usuario
    cout << "Ingrese el nombre del producto: ";
    cin >> nombreProducto;

    cout << "Ingrese el precio unitario del producto: ";
    cin >> precioUnitario;

    cout << "Ingrese el número de unidades: ";
    cin >> numeroUnidades;

    // Calcular el coste total
    double costoTotal = precioUnitario * numeroUnidades;

    // Mostrar los resultados
    cout << "Producto: " << nombreProducto << endl;
    cout << "Precio unitario: "
              << setw(8) << fixed << setprecision(2) << precioUnitario <<endl;
    cout << "Número de unidades: "
              <<setw(3) << numeroUnidades <<endl;
    cout << "Costo total: "
              <<setw(10) <<fixed << setprecision(2) << costoTotal << endl;

    return 0;
}
