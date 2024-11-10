#ifndef VPASSWORD_H
#define VPASSWORD_H

#include <iostream>
#include <string>

using namespace std;
void valida_pass(int indice, string passworduser);


void valida_pass(int indice, string passworduser){
    bool encontrado = false;

    string password_validos[] = {"admin1", "luis1", "root1", "ljaramillo1"};
    if(password_validos[indice] == passworduser){
                encontrado = true;
    }
    if (encontrado == true){
        cout<<"usuario y contrasenia valido "<<endl;
    }
    else{
        cout<<"Intenta de nuevo";
    }

    }

#endif
