#include <iostream>
using namespace std;

int main(){

float n1,n2,n3;
float asistencia;
int proyecto;
int plagio;

float promedio;

cout<<"Nota 1: ";
cin>>n1;

cout<<"Nota 2: ";
cin>>n2;

cout<<"Nota 3: ";
cin>>n3;

cout<<"Asistencia (%): ";
cin>>asistencia;

cout<<"Entrego proyecto? (1 si / 0 no): ";
cin>>proyecto;

cout<<"Cometio plagio? (1 si / 0 no): ";
cin>>plagio;

promedio=(n1+n2+n3)/3;

cout<<"Promedio: "<<promedio<<endl;

if(plagio==1){
cout<<"Estado: Reprobado por plagio"<<endl;
}
else{

if(asistencia<70){
cout<<"Estado: Reprobado por baja asistencia"<<endl;
}
else{

if(promedio>=7 && proyecto==1){
cout<<"Estado: Aprobado"<<endl;
}
else if(promedio>=5){
cout<<"Estado: Recuperacion"<<endl;
}
else{
cout<<"Estado: Reprobado"<<endl;
}

}

}

if(n1>=9 && n2>=9 && n3>=9 && asistencia>=95){
cout<<"Felicitaciones por excelente rendimiento"<<endl;
}

if((n1==10 || n2==10 || n3==10) &&
((n1<4 && n2<4) || (n1<4 && n3<4) || (n2<4 && n3<4))){
cout<<"Rendimiento irregular"<<endl;
}

return 0;
}
