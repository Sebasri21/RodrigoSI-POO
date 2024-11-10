#ifndef LOGUSER_H
#define LOGUSER_H

#include<iostream>
#include<string>

using namespace std;

string usuario[2]={"Sebasi","Rodigle"};

int password[4]={1234,0000,9364,8765};


void loguser(){
    string user;
    int ppassword,i,p;
    cout<<"Ingrese el nombre de usuario"<<endl ;
    cin>>user;



    bool userp=false;
        for(int i=0;i<2;i++){
            if(usuario[1]== user){
                userp=true;

                cout<<"El usuario es correcto continua:"<<endl ;
                cout<<"Ingresa la contraseña"<<endl ;
                cin>>ppassword;
                int p;
                for(int p=0;p<4;p++){
                if(password[1]==ppassword){
                    cout<<"Ingreso exitoso"<<endl ;
                    break;
                }
                break;
            }
break;
        } else {
            cout<<"El usuario es incorrecto, vuelve a intentarlo"<<endl ;
            }



        }


    }

#endif
