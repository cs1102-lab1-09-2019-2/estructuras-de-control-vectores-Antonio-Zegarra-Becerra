#include<iostream>
#include<vector>

using namespace std;

int mediana(vector<int> &lista);
vector<int> leerConsola();

vector<int> leerConsola() {
    vector <int> numeros;
    int num;
    while(true){
        cout<<"Ingrese un numero positivo, escriba -1 si ya no quiere ingresar mas numeros: \n";
        cin>>num;
        if (num!=-1)
            numeros.push_back(num);
        else
            break;
    }
    return numeros;
}

int mediana(vector<int> &lista) {

    if (lista.size()%2 ==0)
        return (lista[lista.size()/2-1]+lista[lista.size()-lista.size()/2])/2;
    else;
        return lista[lista.size()/2];            
}

int main() {
    cout<<"Calcular la mediana de los numeros ingresados:\n\n";
    vector<int> leer_usuario = leerConsola();
    int mediana_elemento = mediana(leer_usuario);
    cout<<"La mediana es: "<<mediana_elemento<<"\n";
}
