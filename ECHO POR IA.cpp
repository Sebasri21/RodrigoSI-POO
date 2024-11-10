#include <iostream> //Librerias de entrada y salida
#include <string> //Libreria para los datos tipo cadena
using namespace std;

// Datos de usuarios (aquí se agregarán los nuevos usuarios y claves)
const int MAX_USUARIOS = 100;
string usuarios[MAX_USUARIOS] = {"admin", "juan", "maria"};
string contrasenas[MAX_USUARIOS] = {"1234", "clave123", "secreta"};

// Función para validar (usuario y contraseña)
bool verificarCredenciales(const string& usuario, const string& contrasena) {
    for (int i = 0; i < MAX_USUARIOS; i++) {
        if (usuarios[i] == usuario && contrasenas[i] == contrasena) {
            return true; // Credenciales válidas
        }
    }
    return false; // Credenciales incorrectas
}

// Función para agregar un nuevo usuario
void agregarUsuario() {
    if (MAX_USUARIOS - 1 < MAX_USUARIOS) {
        cout << "Ingrese el nuevo usuario: ";
        cin >> usuarios[MAX_USUARIOS];
        cout << "Ingrese la contraseña para " << usuarios[MAX_USUARIOS] << ": ";
        cin >> contrasenas[MAX_USUARIOS];
        cout << "Usuario agregado exitosamente." << endl;
    } else {
        cout << "No se pueden agregar más usuarios. El límite ha sido alcanzado." << endl;
    }
}

int main() {
    string usuario, contrasena;
    cout << "Ingrese su usuario: ";
    cin >> usuario;
    cout << "Ingrese su contraseña: ";
    cin >> contrasena;

    if (verificarCredenciales(usuario, contrasena)) {
        cout << "Inicio de sesión exitoso. ¡Bienvenido!" << endl;
        //En caso de que el inicio de sesión sea correcto, en este apartado podrás
        agregar más instrucciones dependiendo de lo que te pida el ejericio.
    } else {
        cout << "Usuario o contraseña incorrectos. Dato no encontrado." << endl;
        cout << "¿Desea agregar un nuevo usuario? (s/n): ";
        char opcion;
        cin >> opcion;
        if (opcion == 's' || opcion == 'S') {
            agregarUsuario();
        }
    }

    return 0;
}
