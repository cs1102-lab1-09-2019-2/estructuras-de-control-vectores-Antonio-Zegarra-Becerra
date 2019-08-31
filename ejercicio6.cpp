#include<iostream>


using namespace std;

int main(){
 int a,b,c,i=0,num=0;
 cout<<"Ingrese los tres números que desea comparar; separados por un espacio: \n";
 cin>>a>>b>>c;
    if(a>b){
     if(a>c){
      num=a;
     }else{
      num=c;
     }
    }else if(b>c){
     num=b;
    } else{
     num=c;     
    }
  cout<<"El número mayor es :"<<num;
}
