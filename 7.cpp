#include <iostream>
using namespace std;

int main(){

int anterior;
int actual;
int tipo;
int habitantes;
int artefactos;
int deuda;

int consumo;
float costo;
float total;

cout<<"Lectura anterior: ";
cin>>anterior;

cout<<"Lectura actual: ";
cin>>actual;

cout<<"Tipo vivienda (1 normal / 2 social): ";
cin>>tipo;

cout<<"Numero de habitantes: ";
cin>>habitantes;

cout<<"Tiene artefactos de alto consumo? (1 si / 0 no): ";
cin>>artefactos;

cout<<"Tiene deuda anterior? (1 si / 0 no): ";
cin>>deuda;

if(actual < anterior){
cout<<"Dato invalido"<<endl;
}
else{

consumo = actual - anterior;

if(consumo <= 100){
costo = consumo * 0.10;
}
else if(consumo <= 300){
costo = consumo * 0.15;
}
else{
costo = consumo * 0.20;
}

total = costo;

if(tipo == 2 && consumo < 150){
total = total * 0.9;
cout<<"Se aplica subsidio"<<endl;
}

if(deuda == 1){
total = total * 1.1;
cout<<"Se aplica recargo por deuda"<<endl;
}

cout<<"Consumo total: "<<consumo<<endl;
cout<<"Costo base: "<<costo<<endl;
cout<<"Total final: "<<total<<endl;

if(consumo / habitantes > 120){
cout<<"Alerta: consumo excesivo"<<endl;
}

if(artefactos == 1 && consumo > 300){
cout<<"Advertencia: alto consumo por artefactos"<<endl;
}

}

return 0;
}
