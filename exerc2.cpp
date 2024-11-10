#include<iostream>

using namespace std;

int impuestosalarial(int a,int b){
    int resultado;
    resultado = a*b;
    return resultado;
}

int impuestosobreproducto(int c,int d){
    int resultado;
    resultado=c*d;
    return resultado;
}

void mostrarresultado(int resultado,string tipo){
    cout<<"El impuesto" <<tipo<<"calculado es: $" <<resultado;
}

void menu(){
    int opcion =0 ;

    while(opcion!=3){
        cout<<"Seleccione una opcion:\n";
        cout<<"1.Calcular impuesto sobre salario\n";
        cout<<"2.Calcular impuesto sobre producto\n";
        cout<<"3.Salir del programa\n";
        cin>>opcion;

        int monto,porcentaje,operacion;
        switch(opcion){
            case 1:
            cout<<"Ingrese el monto del salario\n";
            cin>>monto;
            cout<<"Ingrese el porcentaje del impuesto\n";
            cin>> porcentaje;
            operacion= impuestosalarial(monto& ,porcentaje&)

        }








    }








































}
