#include <iostream>
using namespace std;

int main(){

int minutos_tarde;
int faltas;
int credencial;
int pertenece;

cout<<"Ingrese minutos de retraso: ";
cin>>minutos_tarde;

cout<<"Ingrese numero de faltas acumuladas: ";
cin>>faltas;

cout<<"Trae credencial? (1 si / 0 no): ";
cin>>credencial;

cout<<"Pertenece al curso actual? (1 si / 0 no): ";
cin>>pertenece;

if(credencial==0){
    cout<<"Estado: No puede ingresar"<<endl;
    cout<<"Motivo: No trae credencial"<<endl;
    cout<<"Prioridad: Alta"<<endl;
}
else if(pertenece==0){
    cout<<"Estado: No puede ingresar"<<endl;
    cout<<"Motivo: No pertenece al curso"<<endl;
    cout<<"Prioridad: Alta"<<endl;
}
else if(faltas>=5){
    cout<<"Estado: No puede ingresar"<<endl;
    cout<<"Motivo: Demasiadas faltas"<<endl;
    cout<<"Prioridad: Alta"<<endl;
}
else if(minutos_tarde>10){
    cout<<"Estado: No puede ingresar"<<endl;
    cout<<"Motivo: Llego demasiado tarde"<<endl;
    cout<<"Prioridad: Media"<<endl;
}
else if(faltas>=3){
    cout<<"Estado: Ingresa con advertencia"<<endl;
    cout<<"Motivo: Varias faltas acumuladas"<<endl;
    cout<<"Prioridad: Media"<<endl;
}
else if(minutos_tarde>0){
    cout<<"Estado: Ingresa con advertencia"<<endl;
    cout<<"Motivo: Llego tarde"<<endl;
    cout<<"Prioridad: Baja"<<endl;
}
else{
    cout<<"Estado: Ingresa sin problema"<<endl;
    cout<<"Motivo: Todo correcto"<<endl;
    cout<<"Prioridad: Baja"<<endl;
}

return 0;
}
