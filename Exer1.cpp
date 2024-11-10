#include<iostream>

using namespace std;

int main(){

    int edad;
    cout<<"Ingrese su edad";
    cin>>edad;

    if(edad<18){
        cout<<"Menor de edad"<< ;
    }elseif(edad>18){
        cout<<"Mayor de edad"<< ;
    }elseif(edad>=18&edad<=64){
        cout<<"Adulto"<< ;
    }elseif(edad>=65&edad<=79){
        cout<<"Adulto mayor"<< ;
    }else{
    } break;
        return 0;
}

