#include <iostream>
#include <string>

using namespace std;

int tipodeusuario(int indice);

int main(){


    if (tipodeusuario(3)== 1){
        cout<<"Usuario normal";
    }else{
        cout<<"Usuario Administrador";
    }


    return 0;

}

int tipodeusuario(int indice){

    int tipousuario[] = {1,1,1,2}; // 1 usuario | 2 Administrador;
    return tipousuario[indice];

   }
