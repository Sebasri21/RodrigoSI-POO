
#include "VUSUARIO.h"
#include <iostream>
#include <string>



using namespace std;



int main(){
    bool vwhilemenu = false;
    string user;
    while (!vwhilemenu){
                int opcion;
                cout <<"Ingresa una opcion:" << "\n 1 Login" << "\n 2 Salir" <<endl;
                cin>>opcion;
                switch (opcion){
                    case 1:
                        cout << "Ingresa el usuario: "<<endl;
                        cin>> user;
                        cout << "Usuario ingresado: " << user << endl;
                        valida_usuario(user);
                        break;
                    case 2:
                        cout<<"Hasta Luego"<<endl;
                        vwhilemenu = true;
                        break;
                    default:
                        cout<<"Ingresa una opcion valida"<<endl;
                        break;
                        }
                    }

return 0;
}
