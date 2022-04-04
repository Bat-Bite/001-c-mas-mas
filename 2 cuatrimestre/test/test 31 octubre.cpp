#include <iostream>
using namespace std;
struct persona{
		char nombre[30];
		char apellido[30];
		int edad;
		char sexo;
		char dni[10];
	}cliente[7];
int main()
{
	for (int i = 0; i < 7; i++)
	{
		cin>>cliente[i].nombre;
		cin>>cliente[i].apellido;
		cin>>cliente[i].edad;
		cin>>cliente[i].sexo;
		cin>>cliente[i].dni;
	}
	
	
	return 0;
}