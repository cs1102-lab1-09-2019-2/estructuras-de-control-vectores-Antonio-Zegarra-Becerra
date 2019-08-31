//Este es el EJERCICIO 5

#include <iostream>
#include <cmath>

using namespace std;
float delta(float,float,float);
int main() {
    float a, b, c, x1, x2;
    cout<<"Ingrese las variables a, b y c; separadas por un espacio: \n";
    cin>>a>>b>>c;
    if(a==0 && b==0){
     cout<<"No tiene solución: \n";
    }
    else if(a==0){
     cout<<"Solución: "<<(-c)/b;
    }
    else if(delta(a,b,c)<0){
     cout<<"No tiene solución, delta<0: \n";
    }
    else{
     x1 = -b + (sqrt(pow(b,2) - 4*a*c))/(2*a);
     x2 = -b - (sqrt(pow(b,2) - 4*a*c))/(2*a);
     cout<<"La ecuacion tiene dos soluciones: x1 = "<<x1<<", x2 = "<<x2;
    }
 
}

float delta(float a,float b, float c){
 return ((pow(b, 2) - 4*a*c)/abs((pow(b, 2) - 4*a*c)));
}    
            
