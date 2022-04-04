#include <iostream>
#include <ctype.h>
#include <stdlib.h>
using namespace std;
float ventapremium(float tanques[0], float carga_pesos, float precio_por_litro);
float modificar_tanques( float tanques[2]);
float tanques[3]={100,500,400};
int main()
{
	float carga_pesos, precio_por_litro= 10;
	char op;
	cout<< "a - Nafta premium" <<endl;
	cout<< "b- cambiar valor de los tanques"<<endl;
	cin >> op;
	system ("cls");
	switch (op)
	{
	case 'a':
	{
 ventapremium(tanques, carga_pesos, precio_por_litro);
		break;
	}
	case 'b':
	{
		modificar_tanques(tanques);
		break;
	}
	}
	return 0;
}

float ventapremium(float tanques[0], float carga_pesos, float precio_por_litro)
{
	cout<<"Ingresar monto: ";
	cin>> carga_pesos;
	float tanqueaux=0;
	cout<<"Cantidad de lt: "<<tanques[0]<<"-"<<tanques[1]<<endl;
	tanqueaux = tanques[0]* precio_por_litro;
	if (carga_pesos > tanqueaux)
	{
		cout << " insuficiente";
		return 0;
	}
	else
	{
		cout <<"Litros cargados: "<< carga_pesos / precio_por_litro;
		tanques[0]=tanques[0]-carga_pesos;
	}
	return main();
}

float modificar_tanques(float tanques[2])
{
	for (int i=1;i<=2;i++)
	{
		
		cin>>tanques[i];
		cout<<tanques[i]<<endl;
		}
	return main();
	}