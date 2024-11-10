//metodo de la burbuja

#include<iostream>

using namespace std;

int main(){
    //creo un arreglo
    // indices     0  1  2 3 4 5  = 6 elementos
    int numeros[]={10,40,2,5,1,0};
    int elementos = sizeof(numeros) / sizeof(numeros[0]);

    int i, j, aux;
    //

    for(i=0;i<elementos;i++){
        for(j=0;j<elementos;j++){
            if (numeros[j] > numeros [j+1]){
              aux = numeros[j];
              numeros[j]=numeros[j+1];
              numeros[j+1]=aux;

            }
        }
    }
    cout << "Acendente"<<endl;

    for(i=0;i<elementos;i++){
        cout<<numeros[i]<<"  ";
    }

    cout << "\nDescendente"<< endl;

    for (i= 5; i>=0; i--){

        cout<<numeros[i]<<"  ";
    }



return 0;

}
