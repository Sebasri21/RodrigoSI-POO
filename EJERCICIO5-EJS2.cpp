#include <iostream>
#include <string>

using namespace std;

void intercambiar(string& opcion);

int main() {

    string op1 = "Hola Bienvenidos";
    string op2 = "Clases de POO";

    cout << op1 << endl;
    cout << op2 << endl;

    intercambiar(op2);

    cout<<"";

    cout << op1 << endl;
    cout << op2 << endl;

    return 0;
}

void intercambiar(string& opcion) {
    string mensaje;
    cout << "\nMensaje original: " << endl;
    cout << opcion << endl;
    cout << "\nIngresa Nuevo mensaje: " << endl;
    getline(cin,mensaje);
}
