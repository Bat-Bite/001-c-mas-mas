# include <iostream.h> 
#include <ctype.h>
using namespace std;
void main() 
{ 
int opcion=0; 
do 
{ 
cout<<"1-Calcular mitad"<<endl; 
cout<<"2-Salir"<<endl; 
cin>>opcion; 
system("cls"); 
switch(opcion) 
{ 
case 1: 
{ 
double n_numero,mitad; 
cout<<" Digite un numero "; 
cin>>n_numero; 
mitad=n_numero/2; 
system("cls"); 
cout<<" la mitad es "<<mitad<<endl; 
system("pause"); 
system("cls"); 
} 
break; 
} 

} 
while(opcion!=2); 
system("pause"); 
} 
