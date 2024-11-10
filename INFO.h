#ifndef INFO_H
#define INFO_H

#include <iostream>
#include <string>

using namespace std;

const int MAX_PLACAS = 100;

string placas[MAX_PLACAS] = {"PDC1", "juan", "maria"};

int numPlacas = 3; // N�mero actual de placas
string busqueda;
int indice, i;

void agregarpla()
{
    if (numPlacas < MAX_PLACAS) {
        cout << "Ingrese la nueva placa: ";
        cin >> placas[numPlacas];
        numPlacas++;
        cout << "Placa agregada exitosamente." << endl;
    } else {
        cout << "No se pueden agregar m�s placas. El l�mite ha sido alcanzado." << endl;
    }
}

void buscarpla()
{
    cout << "Ingrese la placa a buscar: ";
    cin >> busqueda;
    indice = -1; // Inicializar �ndice a -1
    for (int i = 0; i < numPlacas; i++) {
        if (placas[i] == busqueda) {
            indice = i;
            break;
        }
    }

    if (indice == -1) {
        cout << "No encontrado\n";
    } else {
        cout << "Encontrado en el �ndice " << indice << endl;
    }
}

void modificarpl()
{
    cout << "Ingrese el �ndice de la placa a modificar: ";
    cin >> i;
    if (i >= 0 && i < numPlacas) {
        cout << "Ingrese la nueva placa: ";
        cin >> placas[i];
        cout << "Placa modificada exitosamente." << endl;
    } else {
        cout << "�ndice fuera de rango." << endl;
    }
}

void printplacas()
{
    for (int i = 0; i < numPlacas; i++) {
        cout << placas[i] << endl;
    }
}

#endif
