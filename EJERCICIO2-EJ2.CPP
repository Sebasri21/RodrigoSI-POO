#include<iostream>
#include<math.h>
#include<string>

using namespace std;
void menu(){

    float radio,radioc,areac,lado,ladoc,radio2,radio2c,altura,resultado,generatriz,radiocc,radioccc,abase,asupcurva,acono,radioe,radioec,aesfera;

    cout<<"Para el area de una circunferencia:"<<endl ;
    radio=5.1;
    radioc= pow(radio,2);
    areac= (3.1416*radioc);

    cout<<"El area de la circunferencia de radio 5.1 es:" <<areac<<endl ;

      cout<<"Para el area de un cuadrado dado el valor de su lado: "<<endl ;
    lado=6.5;
    ladoc= pow(lado,2);

    cout<<"El area de un cuadrado de lado 6.5 es:" <<ladoc<<endl ;

    cout<<"Para el area de un cilindro dado el radio y su altura: "<<endl ;
    radio2=4.7;
    radio2c= pow(radio2,2);
    altura =16.2;
    resultado=((2*3.1416*radio2c)+(2*3.1416*altura));
    cout<<"El area de un cilindro de radio 4.7 y una altura de 16.2 es :" <<resultado<<endl ;

    cout<<"Para el area de un cono dada su generatriz y su radio: "<<endl ;
    generatriz=2;
    radiocc=4.86;
    radioccc= pow(radiocc,2);
    abase=(3.1416*radioccc);
    asupcurva=(3.1416*generatriz*radiocc);
    acono=(abase)+(asupcurva);
    cout<<"El area de un cono de generatriz 2 y radio 4.86 es:" <<acono<<endl ;

    cout<<"Para el area de una esfera dado su radio"<<endl ;

    radioe=5.63;
    radioec= pow(radioe,2);

    aesfera=4*3.1416*radioec;
    cout<<"El area de una esfera dado su radio es:" <<aesfera<<endl ;

}


int main(){
    menu();
    return 0;
}
