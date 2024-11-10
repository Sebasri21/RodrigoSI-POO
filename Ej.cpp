#include <iostream>
using namespace std;

int main() {
    string palabra;
    string usuarios []= {"Cristian","Sebastian","Cristina"};
    cout << "Ingresa la palabra a buscar";
    getline(cin,palabra);

    for (string valor:usuarios){

        string subcadena = valor.substr(palabra.length());
        if(subcadena==palabra){
            cout<<valor<<endl;
        }
    }

    return 0;
}
