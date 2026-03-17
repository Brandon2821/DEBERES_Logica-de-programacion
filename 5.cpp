#include <iostream>
using namespace std;

int main(){

int monto;
int saldo;

int b20,b10,b5,b1;
int r20,r10,r5,r1;

int total;

cout<<"Saldo del usuario: ";
cin>>saldo;

cout<<"Monto a retirar: ";
cin>>monto;

cout<<"Billetes de 20: ";
cin>>b20;

cout<<"Billetes de 10: ";
cin>>b10;

cout<<"Billetes de 5: ";
cin>>b5;

cout<<"Billetes de 1: ";
cin>>b1;

if(monto<=0){
cout<<"Monto invalido";
}
else if(monto>saldo){
cout<<"Saldo insuficiente";
}
else{

total=b20*20+b10*10+b5*5+b1*1;

if(monto>total){
cout<<"El cajero no tiene suficiente dinero";
}
else{

r20=monto/20;
if(r20>b20) r20=b20;
monto=monto-r20*20;

r10=monto/10;
if(r10>b10) r10=b10;
monto=monto-r10*10;

r5=monto/5;
if(r5>b5) r5=b5;
monto=monto-r5*5;

r1=monto;

if(r1>b1){
cout<<"No se puede entregar el monto exacto";
}
else{

cout<<"Billetes de 20: "<<r20<<endl;
cout<<"Billetes de 10: "<<r10<<endl;
cout<<"Billetes de 5: "<<r5<<endl;
cout<<"Billetes de 1: "<<r1<<endl;

}

}

}

return 0;
}
