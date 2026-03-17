#include <iostream>
using namespace std;

int main(){

int hojas;
int tipo;
int cliente;
int horario;
int anillado;

float precio;
float subtotal;
float descuento=0;
float recargo=0;
float total;

cout<<"Hojas: ";
cin>>hojas;

cout<<"Tipo impresion (1 BN / 2 color): ";
cin>>tipo;

cout<<"Cliente (1 estudiante / 2 docente): ";
cin>>cliente;

cout<<"Horario nocturno (1 si / 0 no): ";
cin>>horario;

cout<<"Anillado (1 si / 0 no): ";
cin>>anillado;

if(hojas<=20){
precio=0.05;
}
else if(hojas<=100){
precio=0.04;
}
else{
precio=0.03;
}

if(tipo==2){
precio=precio+0.05;
}

subtotal=hojas*precio;

if(cliente==2){
descuento=subtotal*0.05;
}
else if(cliente==1 && hojas>50){
descuento=subtotal*0.08;
}

if(horario==1){
recargo=subtotal*0.10;
}

if(anillado==1){
total=subtotal-descuento+recargo+2;
}
else{
total=subtotal-descuento+recargo;
}

cout<<"Subtotal: "<<subtotal<<endl;
cout<<"Descuento: "<<descuento<<endl;
cout<<"Recargo: "<<recargo<<endl;
cout<<"Total: "<<total<<endl;

return 0;
}
