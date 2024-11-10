#include<iostream>
#include<vector>
using namespace std;

int main(){
    int numeros[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        cout<<numeros[i];
    }
cout<<endl;
cout<<endl;

string cadena[3]={"Justhyn","ama","Ian"};
for (string valor:cadena){
    cout<<valor;
}

vector<string>jota;
cout<<"\n"<<endl;

//agrega datos
jota.push_back("abcd");
jota.push_back("efgh");
jota.push_back("ijkl");

//eliminar datos
jota.erase(jota.begin()+2);

//imprime datos
for (string stefy:jota){
    cout<<"\n"<<stefy;
}

}
