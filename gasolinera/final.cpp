#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <ctype.h>
using namespace std;
float VentaPremium(float tanques[], float carga_pesos, float precio_por_litro);
float tanque[3] = {100, 200, 110};
float carga_Pesos = 0;
float precio_por_Litro = 13;
int main()
{
	char op;
	cout << "a: Nafta Premium:";
	cin >> op;
	op=tolower(op);
	system("cls");
	switch (op)
	{
	case 'a':
	{
		VentaPremium(tanque, carga_Pesos, precio_por_Litro);
		break;
	}
	}
	return 0;
}

float VentaPremium(float tanques[0], float carga_pesos, float precio_por_litro)
{
	float litrosV = 0;
	cout << "Tanques: " << tanques[0] << endl;
	cout << "--------------------------------------------" << endl;
	cout << "|      Venta de combustible Premium:       |" << endl;
	cout << "--------------------------------------------" << endl;
	cout << "" << endl;
	cout << "Ingresa el monto en pesos que desea cargar: $";
	cin >> carga_pesos;

	litrosV = carga_pesos / precio_por_litro;
	if (litrosV > tanques[0])
	{
		cout << "Stock insuficiente." << endl;
		cout << "Litros disponibles: " << tanques[0] << endl;
		system("pause");
		return 0;
	}
	else if (litrosV < tanques[0])
	{
		tanques[0] = tanques[0] - litrosV;
		cout << "Carga hecha." << endl;
		cout << "Litros vendidos: " << litrosV << endl;
		cout << "Combustible restante: " << tanques[0] << endl;
		system("pause");
		system("cls");
		return main();
	}
}