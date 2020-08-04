#include <iostream>
#include <string>
using namespace std;
int main() {
    string P,C;
    int a=0,b=0;
    while(a<3){
        cout<< "Ingrese el usuario: ";
        cin>> P;
        cout<<"ingrese la contraseña: ";
        cin>> C;
        if(P == "root" && C== "1234"){
            cout<<"Bienvenido al sistema"<<endl;
            a=3;
        }else{
            cout<<"Usuario y contraseña no validos"<<endl;
            a++;
            b++;
        }
    }
    if(b>0){
        cout<<"Superado numero de intentos"<<endl;
    }
}