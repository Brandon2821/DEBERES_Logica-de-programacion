#include <iostream>
using namespace std;

int main(){

int estudiantes;
int transporte;
int dias;
int alimentacion;
int descuento;
int coordinador;

float hospedaje;

float costo_transporte;
float costo_hospedaje;
float costo_alimentacion=0;
float total;
float total_estudiante;

cout<<"Numero de estudiantes: ";
cin>>estudiantes;

cout<<"Tipo transporte (1 bus / 2 avion): ";
cin>>transporte;

cout<<"Numero de dias: ";
cin>>dias;

cout<<"Costo hospedaje por dia: ";
cin>>hospedaje;

cout<<"Incluye alimentacion? (1 si / 0 no): ";
cin>>alimentacion;

cout<<"Descuento institucional? (1 si / 0 no): ";
cin>>descuento;

cout<<"Hay coordinador? (1 si / 0 no): ";
cin>>coordinador;

if(transporte==1){
costo_transporte=estudiantes*20;
}
else{
costo_transporte=estudiantes*100;
}

if(coordinador==1){
costo_transporte=costo_transporte-20;
}

costo_hospedaje=estudiantes*dias*hospedaje;

if(dias>3){
costo_hospedaje=costo_hospedaje*0.9;
}

if(alimentacion==1){
costo_alimentacion=estudiantes*dias*10;
}

total=costo_transporte+costo_hospedaje+costo_alimentacion;

if(descuento==1){
total=total*0.95;
}

total_estudiante=total/estudiantes;

cout<<"Costo transporte: "<<costo_transporte<<endl;
cout<<"Costo hospedaje: "<<costo_hospedaje<<endl;
cout<<"Costo alimentacion: "<<costo_alimentacion<<endl;
cout<<"Total viaje: "<<total<<endl;
cout<<"Total por estudiante: "<<total_estudiante<<endl;

if(total_estudiante>200){
cout<<"Viaje no recomendable"<<endl;
}
else{
cout<<"Viaje recomendable"<<endl;
}

return 0;
}
