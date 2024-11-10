#include<iostream>
#include<string>
using namespace std;

float suma(float a,float b){
    float resultado;
    resultado = a+b;
    return resultado;
}

float resta(float d,float e){
    float resultado;
    resultado = d-e;
    return resultado;
}

float multi(float f,float g){
    float resultado;
    resultado = f*g;
    return resultado;
}

float division(float h,float i){
    float resultado;
    resultado = h/i;
    return resultado;
}

void mostrarresultado(float resultado,string tipo){
    cout<<"El resultado de la " <<tipo<< " es:" <<resultado<<endl ;

}

void menu(){
    int opcion=0;
    int datos ;
    while(opcion!=5){
    cout<<"Ingrese la operacion que desea realizar \n";
    cout<<"1. Suma "<<endl ;
    cout<<"2. Resta "<<endl ;
    cout<<"3. Multiplicación "<<endl ;
    cout<<"4. Division"<<endl ;
    cout<<"5. SALIR DEL PROGRAMA"<<endl ;
    cin>>opcion;

            float valor1,valor2,resultado;
        switch (opcion){
        case 1:
            cout<<"Ingrese valor1"<<endl ;
            cin>>valor1;
            cout<<"Ingrese valor2"<<endl ;
            cin>>valor2;
            resultado = suma(valor1,valor2);
            mostrarresultado(resultado,"suma") ;

        break;
        case 2:
            cout<<"Ingrese valor1"<<endl ;
            cin>>valor1;
            cout<<"Ingrese valor2"<<endl ;
            cin>>valor2;
            resultado = resta(valor1,valor2);
            mostrarresultado(resultado,"resta") ;
        break;

        case 3:
            cout<<"Ingrese valor1"<<endl ;
            cin>>valor1;
            cout<<"Ingrese valor2"<<endl ;
            cin>>valor2;
            resultado = multi(valor1,valor2);
            mostrarresultado(resultado,"multiplicación") ;
        break;

        case 4:
            cout<<"Ingrese valor1"<<endl ;
            cin>>valor1;
            cout<<"Ingrese valor2"<<endl ;
            cin>>valor2;
            resultado = division(valor1,valor2);
            mostrarresultado(resultado,"division");
        break;

        default:
            cout<< "Saliendo del programa"<<endl ;

        }

    }
}


int main(){

    menu();
    return 0;

}
