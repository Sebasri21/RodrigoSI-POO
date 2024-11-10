#include <iostream>
using namespace std;

int main() {
    string palabra;
    string usuarios []= {"Cristian","Coronel","Cristina"};
    cout << "Ingresa la palabra a buscar";
    cin>>palabra;

    for (string valor:usuarios){

        int palabrah;

        string subcadena = palabrah.legth();
        if(subcadena==palabra){
            cout<<valor<<endl;
        }
    }

    return 0;
}
