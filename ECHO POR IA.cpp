#include <iostream> //Librerias de entrada y salida
#include <string> //Libreria para los datos tipo cadena
using namespace std;

// Datos de usuarios (aqu� se agregar�n los nuevos usuarios y claves)
const int MAX_USUARIOS = 100;
string usuarios[MAX_USUARIOS] = {"admin", "juan", "maria"};
string contrasenas[MAX_USUARIOS] = {"1234", "clave123", "secreta"};

// Funci�n para validar (usuario y contrase�a)
bool verificarCredenciales(const string& usuario, const string& contrasena) {
    for (int i = 0; i < MAX_USUARIOS; i++) {
        if (usuarios[i] == usuario && contrasenas[i] == contrasena) {
            return true; // Credenciales v�lidas
        }
    }
    return false; // Credenciales incorrectas
}

// Funci�n para agregar un nuevo usuario
void agregarUsuario() {
    if (MAX_USUARIOS - 1 < MAX_USUARIOS) {
        cout << "Ingrese el nuevo usuario: ";
        cin >> usuarios[MAX_USUARIOS];
        cout << "Ingrese la contrase�a para " << usuarios[MAX_USUARIOS] << ": ";
        cin >> contrasenas[MAX_USUARIOS];
        cout << "Usuario agregado exitosamente." << endl;
    } else {
        cout << "No se pueden agregar m�s usuarios. El l�mite ha sido alcanzado." << endl;
    }
}

int main() {
    string usuario, contrasena;
    cout << "Ingrese su usuario: ";
    cin >> usuario;
    cout << "Ingrese su contrase�a: ";
    cin >> contrasena;

    if (verificarCredenciales(usuario, contrasena)) {
        cout << "Inicio de sesi�n exitoso. �Bienvenido!" << endl;
        //En caso de que el inicio de sesi�n sea correcto, en este apartado podr�s
        agregar m�s instrucciones dependiendo de lo que te pida el ejericio.
    } else {
        cout << "Usuario o contrase�a incorrectos. Dato no encontrado." << endl;
        cout << "�Desea agregar un nuevo usuario? (s/n): ";
        char opcion;
        cin >> opcion;
        if (opcion == 's' || opcion == 'S') {
            agregarUsuario();
        }
    }

    return 0;
}
