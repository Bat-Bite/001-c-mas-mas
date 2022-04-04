#include <iostream>
using namespace std;
int main()
{
	float A,B,C,D,F,G,H,I, resultado =0;
	cout <<"ingrese numero a:";
	cin>>A;
	cout<< "ingrese numero b:";
	cin>>B;
	cout<<"ingrese numero c:";
	cin>>C;
	cout<< "ingrese numero d:";
	cin>>D;
	system("cls");
	F=A;
	G=B;
	H=C;
	I=D;
	cout<<"Alumno 1:"<<A<<"\n";
	cout<<"Alumno 2:"<<B<<"\n";
	cout<<"Alumno 3:"<<C<<"\n";
	cout<<"Alumno 4:"<<D<<"\n";
	resultado =(F+G+H+I)/4 ;
	
	cout<<"Promedio total:"<<resultado;
	return 0;
}