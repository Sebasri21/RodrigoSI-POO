#include<iostream>
#include<math.h>

using namespace std;

int main(){

    int opcion=0;

    while(opcion !=11){

        switch (opcion){

        case 1:
            float suma(float a,float b){
            float resultado;
            resultado = a+b;
            return resultado;
            }
        break;

        case 2:
            float resta(float d,float e){
            float resultado;
            resultado = d-e;
            return resultado;
            }
        case 3:
            float multi(float f,float g){
            float resultado;
            resultado = f*g;
            return resultado;
            }
        break;

        case 4:
            float division(float h,float i){
            float resultado;
            resultado = h/i;
            return resultado;
            }
        case 5:

            float cuadradodeunnumero(float num1){
            float resultado;
            resultado = pow(num1 ,2)
            return resultado;
            }
        break;

        case 6:
            float cubodeunnumero(float num){
            float resultado;
            resultado =pow(num,3)
            return resultado;
            }
        break;

        case 7:
            float raizcuadradadeX(float x){
            float resultado;
            resultado= sqrt(x);4
            return resultado;
            }
        break;

        case 8:
            logaritmonatural(float A){
            float resultado;
            resultado =log(A)
            return resultado;
            }
        break;

        case 9:
            areadelcuadrado(float lado){
            float resultado;
            resultado= pow(lado,2);
            return resultado;
            }
        break;

        case 10:
            float perimetrodelcuadrado(float lado1){
            float resutado;
            resultado= lado1+lado1+lado1+lado1;
            return resultado;

        break;

        default:

            cout<<"Saliendod el programa"<<endl ;




            }
        }















    }



























}
