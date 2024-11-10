#include "LOGUSER.H"

#include<iostream>
#include<string>


void  menu(){
    int opcion=0;

    cout<<"Ingrese una opcion"<<endl ;
    cout<<"1. Ingresar"<<endl ;
    cout<<"2. Salir"<<endl ;
    cin>>opcion;
    switch(opcion){

        case 1:
            loguser();
        break;
        case 2:
            cout<<" SALIENDO "<<endl ;
        break;


    }
}

int main(){
    menu();


}
