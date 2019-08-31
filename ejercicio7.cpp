#include <iostream>
#include <stdexcept> //Validar en la division por 0
using std::cout;
using std::cin;
using std::invalid_argument;

void mostrarMenu();
int sumar(int a, int b);
int restar(int a, int b);
int multiplicar(int a, int b);
float dividir(int a, int b);
int modulo(int a, int b);


void mostrarMenu() {
    cout<<"***************************************************\n";
    cout<<"                     MENU                          \n";
    cout<<"***************************************************\n";
    cout<<"  1.- Add\n";
    cout<<"  2.- Resta\n";
    cout<<"  3.- Multiplicar\n";
    cout<<"  4.- Dividir\n";
    cout<<"  6.- Modulo\n";
}

int sumar(int a, int b) {
    return a + b;
}
int restar(int a, int b) {
    return a - b;
}
int multiplicar(int a, int b) {
    return a * b;
}
float dividir(int a, int b) {
    return a / b;
}
int modulo(int a, int b) {
    return a % b;
}



int main() {
    int x, y, opcion;
    char pregunta=y;
    mostrarMenu();
    do{
        cout<<"Ingrese una opcion: ";
        cin>>opcion;
        cout<<"Ingrese los dos numeros separados por un espacio: ";
        cin>>x>>y;
        switch(opcion) {
            case 1:
                cout<<"Resultado de la suma: "<<sumar(x, y)<<"\n";
                break;
            case 2:
                cout<<"Resultado de la resta: "<<restar(x, y)<<"\n";
                break;
            case 3:
                cout<<"Resultado de la multiplicación:"<<multiplicar(x, y)<<"\n";
                break;
            case 4:
                cout<<"Resultado de la división: "<<dividir(x, y)<<"\n";
                break;
            case 5:
                cout<<"El módulo es: "<<modulo(x, y)<<"\n";
                break;
            }
        cout<<"Continuar? ";
        cin>>pregunta;
    }while(pregunta=='y');
    return 0;
}
