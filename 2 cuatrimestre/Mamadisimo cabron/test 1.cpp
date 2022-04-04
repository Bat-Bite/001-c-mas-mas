#include <iostream>
#include <stdlib.h>
#include <cstring>
#include <ctype.h>
#define filas 3
#define largo 15
using namespace std;
void menu();
void ingreso();
void lista();
void ordnom();
void buscar();
int edad[filas];
char nombre[filas][largo], apellido[filas][largo];

int main()
{
	menu();
}

void menu()
{
	int op;
	cout << "1: Ingresar Datos" << endl;
	cout << "2: Lista de nombres y edad" << endl;
	cout << "3: Ordenar apellidos" << endl;
	cout << "4:Buscar" << endl;
	cout << "6: Salir" << endl;
	cin >> op;
	switch (op)
	{
	case 1:
	{
		ingreso();
	}
	case 2:
	{
		lista();
	}
	case 3:
	{
		ordnom();
	}
	case 4:
	{
		buscar();
	}
	case 6:
	{
		exit;
	}
	}
	
}

void ingreso()
{
	for (int i = 0; i < filas; i++)
	{
		cout << "Ingresar nombre: ";
		cin >> nombre[i];
		cout << "Ingrese apellido: ";
		cin >> apellido[i];
		cout << "ingrese edad: ";
		cin >> edad[i];
		while ((edad[i] > 150) || (edad[i] < 1))
		{
			cout << "Edad no valida, ingrese nuevamente: ";
			cin >> edad[i];
		}
		cout << endl;
	}
	menu();
}

void lista()
{
	cout << "nombre - " << "apellido -" << " edad " << endl;
	for (int i = 0; i < filas; i++)
	{
		cout << nombre[i] << " - " << apellido[i] << " - " << edad[i] << endl;
	}
	menu();
}

void ordnom()
{
	int f = 0, auxnum;
	char aux[largo];
	for (int x = filas - 1; x >= 0; x--)
	{
		for (int i = 0; i < x; i++)
		{
			f = strcmp(apellido[i], apellido[i + 1]);
			if (f > 0)
			{
				strcpy(aux, apellido[i]);
				strcpy(apellido[i], apellido[i + 1]);
				strcpy(apellido[i + 1], aux);
				strcpy(aux, nombre[i]);
				strcpy(nombre[i], nombre[i + 1]);
				strcpy(nombre[i + 1], aux);
				auxnum = edad[i];
				edad[i] = edad[i + 1];
				edad[i + 1] = auxnum;
			}
			else if ((f == 0)&& strcmp(nombre[i], nombre[i + 1]) > 0)
			{
				strcpy(aux, nombre[i]);
				strcpy(nombre[i], nombre[i + 1]);
				strcpy(nombre[i + 1], aux);
				auxnum = edad[i];
				edad[i] = edad[i + 1];
				edad[i + 1] = auxnum;
			}
		}
	}
	lista();
	main();
}

void buscar()
{
	char b[15];
	cout << "ingresar apellido: ";
	cin >> b;
	for (int x=0;b[x]!='\0';x++)
	{b[x]=tolower(b[x]);}
	for (int i = 0; i < filas; i++)
	{
		if (strcmp(b, apellido[i]) == 0)
		{
			cout << apellido[i] << " - " << nombre[i] << endl;
		}
	}
	menu();
}