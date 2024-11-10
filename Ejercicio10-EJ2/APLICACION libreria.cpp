#include<iostream>
#include"QUAD.h"

using namespace std;

int main(){
    int num1,operacion ;
    cout<<"Ingrese un numero"<<endl ;
    cin>>num1;
    operacion= cuadrado(num1);

    cout<<"El cuadrado de el numero es: " <<operacion<<endl ;

    return 0;

}
