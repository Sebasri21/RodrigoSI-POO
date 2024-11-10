#include<iostream>
#include<conio.h>


using namespace std;



void cambiodenums(int&,int&);

int main(){

    int A,B;

    cout<<"Ingrese el primer valo"<<endl ;
    cin>>A;
    cout<<" Ingrese el segundo valor"<<endl ;
    cin>>B;

    cambiodenums(A,B);

    getch();


return 0;

}

void cambiodenums(int& xA, int& yB){

    xA=15;
    yB=60;

    cout<<"El valor orignal del priemr num es:"<<xA<<endl ;
    cout<<"El valor original del segundo numero es: "<<yB<<endl ;




}
