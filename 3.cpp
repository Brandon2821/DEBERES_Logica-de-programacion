#include <iostream>
using namespace std;

int main(){

float lado1,lado2,lado3;
float altura;
float angulo;
float area;

cout<<"Ingrese lado 1: ";
cin>>lado1;

cout<<"Ingrese lado 2: ";
cin>>lado2;

cout<<"Ingrese lado 3: ";
cin>>lado3;

cout<<"Ingrese altura: ";
cin>>altura;

cout<<"Ingrese angulo: ";
cin>>angulo;

if(lado1+lado2>lado3 && lado1+lado3>lado2 && lado2+lado3>lado1){

cout<<"Triangulo valido"<<endl;

if(lado1==lado2 && lado2==lado3){
cout<<"Tipo por lados: Equilatero"<<endl;
}
else if(lado1==lado2 || lado1==lado3 || lado2==lado3){
cout<<"Tipo por lados: Isosceles"<<endl;
}
else{
cout<<"Tipo por lados: Escaleno"<<endl;
}

if(angulo<90){
cout<<"Tipo por angulo: Acutangulo"<<endl;
}
else if(angulo==90){
cout<<"Tipo por angulo: Rectangulo"<<endl;
}
else{
cout<<"Tipo por angulo: Obtusangulo"<<endl;
}

area=(lado1*altura)/2;
cout<<"Area: "<<area<<endl;

if(altura>lado1 || altura>lado2 || altura>lado3){
cout<<"Advertencia: altura inconsistente"<<endl;
}
else{
cout<<"Altura correcta"<<endl;
}

}
else{
cout<<"No forma un triangulo"<<endl;
}

return 0;
}
