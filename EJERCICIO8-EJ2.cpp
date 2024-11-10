#include<iostream>
#include<limits>
#include<string>
#include<vector>

using namespace std;

void agregar_usuarios(vector<string>& usuarios);
void buscar_usuario(vector<string> matriz);

int main() {
    int opcion;
    bool vwhile = true;
    vector<string> usuarios;

    while (vwhile) {
        cout << "Opcion 1: agregar" << "\nOpcion 2: Buscar" << "\nOpcion 3: Salir" << endl;
        cin >> opcion;

        if (cin.fail()) {
            // Si la entrada no es un entero
            cin.clear(); // Limpia el estado de error de cin
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\nIngresa un número entero válido" << endl;
        } else {
            switch (opcion) {
                case 1:
                    agregar_usuarios(usuarios);
                    break;

                case 2:
                    cout << "\nBuscar" << endl;
                    buscar_usuario(usuarios);
                    // Aquí podrías agregar la lógica para buscar usuarios
                    break;

                case 3:
                    cout << "\nSalir" << endl;
                    vwhile = false;
                    break;

                default:
                    cout << "\nIngresa una opcion correcta" << endl;
                    break;
            }
            cout << endl;
        }
    }
    return 0;
}

void agregar_usuarios(vector<string>& usuarios) {
    string usuario;
    cout << "Ingresa usuario: ";
    cin >> usuario;
    usuarios.push_back(usuario);
    cout << "Usuario agregado: " << usuario << endl;
}

void buscar_usuario(vector<string> matriz){

    for(string valor :matriz){
        cout<<valor<<endl;
}

}
