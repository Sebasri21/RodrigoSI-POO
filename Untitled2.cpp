#include<iostream>

using namespace std;

int main(){

    int edad;
    cout<<"Ingrese su edad";
    cin>>edad;

    if(edad<18){
        cout<<"Menor de edad"<<endl ;
    }else if(edad>18){
        cout<<"Mayor de edad"<<endl ;
    }else if(edad>19||edad<=64){
        cout<<"Adulto"<<endl ;
    }else if(edad>=65||edad<=79){
        cout<<"Adulto mayor"<<endl ;
    }else{
    }
    return 0;
}
