#include <iostream>
using namespace std;

int main(){

float promedio;
int materias;
int asistencia;
int ingresos;
int proyectos;

cout<<"Ingrese promedio academico: ";
cin>>promedio;

cout<<"Ingrese materias perdidas: ";
cin>>materias;

cout<<"Ingrese asistencia (%): ";
cin>>asistencia;

cout<<"Ingresos familiares bajos? (1 si / 0 no): ";
cin>>ingresos;

cout<<"Participa en proyectos? (1 si / 0 no): ";
cin>>proyectos;

if(asistencia < 80){
    cout<<"Tipo de ayuda: Sin beneficio"<<endl;
    cout<<"Razon academica: Asistencia baja"<<endl;
}
else if(promedio < 7){
    cout<<"Tipo de ayuda: Sin beneficio"<<endl;
    cout<<"Razon academica: Promedio bajo"<<endl;
}
else if(promedio >= 9 && asistencia >= 90 && materias == 0){
    cout<<"Tipo de ayuda: Beca completa"<<endl;
}
else if(promedio >= 8 && asistencia >= 85){
    cout<<"Tipo de ayuda: Beca parcial"<<endl;
}
else{
    cout<<"Tipo de ayuda: Ayuda de materiales"<<endl;
}

if(proyectos == 1 && ingresos == 1){
    cout<<"Razon economica: Ingresos bajos y participa en proyectos"<<endl;
    cout<<"Observacion: Puede subir un nivel de ayuda"<<endl;
}
else{
    cout<<"Razon economica: No aplica mejora"<<endl;
}

return 0

}
