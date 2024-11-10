#include <iostream>
#include <string>
#include <vector>

using namespace std;

//Datos del participante
struct Participante {
string nombre;
vector<float> calificaciones;
float promedio;
};

//Funci�n para inicia sesi�n
bool iniciarSesion() {
string usuario, contrasena;

cout << "Ingrese su usuario: ";
cin >> usuario;

cout << "Ingrese su contrase�a: ";
cin >> contrasena;

if (usuario == "admin" && contrasena == "1234") {
return true;
} else {
cout << "Usuario o contrase�a incorrectos. Intente de nuevo." << endl;
return false;
}
}

//Funci�n para calificar al participante
void calificarParticipante(Participante &participante) {
float calificacion;

// Calificaci�n en creatividad de vestimenta tradicional
cout << "Calificaci�n de " << participante.nombre << " en creatividad de vestimenta tradicional (1-10): ";
cin >> calificacion;
while (calificacion < 1 || calificacion > 10) {
cout << "Calificaci�n inv�lida. Ingrese un valor entre 1 y 10: ";
cin >> calificacion;
}
participante.calificaciones.push_back(calificacion);

// Calificaci�n en Traje de Gala
cout << "Calificaci�n de " << participante.nombre << " en Traje de Gala (1-10): ";
cin >> calificacion;
while (calificacion < 1 || calificacion > 10) {
cout << "Calificaci�n inv�lida. Ingrese un valor entre 1 y 10: ";
cin >> calificacion;
}
participante.calificaciones.push_back(calificacion);

// Calificaci�n en Respuesta a la Pregunta
cout << "Calificaci�n de " << participante.nombre << " en Respuesta a la Pregunta (1-10): ";
cin >> calificacion;
while (calificacion < 1 || calificacion > 10) {
cout << "Calificaci�n inv�lida. Ingrese un valor entre 1 y 10: ";
cin >> calificacion;
}
participante.calificaciones.push_back(calificacion);
}

// Funci�n para calcular el promedio de una participante
void calcularPromedio(Participante &participante) {
float suma = 0;

for (float calificacion : participante.calificaciones) {
suma += calificacion;
}

participante.promedio = suma / participante.calificaciones.size();
}

// Funci�n para determinar la ganadora
Participante determinarGanadora(vector<Participante> &participantes) {
Participante ganadora = participantes[0];

for (int i = 1; i < participantes.size(); i++) {
if (participantes[i].promedio > ganadora.promedio) {
ganadora = participantes[i];
}
}

return ganadora;
}

int main() {
// Vector para almacenar las participantes
vector<Participante> participantes;

// Inicio de sesi�n
if (!iniciarSesion()) {
return 1;
}

// Selecci�n de participantes
string nombreParticipante;
int numParticipantes = 3;

cout << "Ingrese el nombre de las " << numParticipantes << " participantes:" << endl;
for (int i = 0; i < numParticipantes; i++) {
cin >> nombreParticipante;

Participante participante;
participante.nombre = nombreParticipante;

calificarParticipante(participante);
calcularPromedio(participante);

participantes.push_back(participante);
}

// Determinaci�n de la ganadora
Participante ganadora = determinarGanadora(participantes);

// Anuncio de la ganadora
cout << "\nFelicidades! La ganadora del reinado es: " << ganadora.nombre << endl;
cout << "Su promedio final fue de: " << ganadora.promedio << endl;

return 0;
}
