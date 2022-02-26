#include <iostream>
using namespace std;
int suma(int, int );
void procedimiento1();
int Global;
const string LENGUAJE="c++";

int main() {
    procedimiento1();
    cout<<"Ingrese el primer numero";
    int primerNumero, segundoNumero;
    cin>>primerNumero;
    cout<<"Ingrese el segundo numero";
    cin>>segundoNumero;

    suma(primerNumero,segundoNumero);

    cout<<"SU RESULTADO ES: " <<Global;
    return 0;
}

int suma(int primerNumero, int segundoNumero){
    //int resultado= primerNumero+segundoNumero; variable local
    //return primerNumero+segundoNumero;
    Global= primerNumero+segundoNumero;//variable global
    return Global;
}

void procedimiento1(){
    cout<<" Bienvenido a calculadora  " <<LENGUAJE<< endl;
}