#ifndef VUSUARIO_H
#define VUSUARIO_H

#include "VPASSWORD.h"

#include <iostream>
#include <string>

using namespace std;

void valida_usuario(string user);

void valida_usuario(string user){
    bool encontrado = false;
    int indice;
    cout <<user<<endl;
    string usuarios_validos[] = {"admin", "luis", "root", "ljaramillo"};

    for(int i = 0; i<4 ;i++){
        cout<<usuarios_validos[i]<<endl;
        if(usuarios_validos[i] == user){
                indice = i;
                encontrado = true;
                break;
        }
    }
    if(encontrado == true){
        string pswd;

        cout<<"ahora compara la passwd enviando el indice "<< indice<<endl;
        cout<<"Ingresa la password"<<endl ;
        cin>>pswd;
        valida_pass(i,pswd);

    }
    else{
        cout<<"usuario Incorrecto" << endl;
    }
}


#endif
