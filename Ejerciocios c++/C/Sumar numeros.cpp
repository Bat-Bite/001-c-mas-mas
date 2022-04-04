#include <iostream>
#include <string>
using namespace std;
int main()
{
	char jue[20], cadenan[20];
	long z = 0;
	int suma = 0, x, i;
	cout << "ingrese numero: ";
	cin >> cadenan;
	int largo = strlen(cadenan);
	//invertir numero
	for (x = 0, i = largo - 1; 0 <= i; i--, x++)
	{
		jue[x] = cadenan[i];
	}
	jue[largo]='\0';
	cout << "Numero invertido: " << jue << endl;
	//suma de cadenas y suma de a 1 digito
	if (stoi(cadenan)>stoi(jue))
	{
		z = stoi(cadenan) - stoi(jue);
	}
	else
	{
		z = stoi(jue)-stoi(cadenan);
		}
	cout << z << endl;
	for (i = 0, x = 0; i < largo; i++)
	{
		x = z % 10;
		z = z / 10;
		suma += x;
	}
	cout << "Suma de digitos: " << suma << endl;
}

/*
int main()
{
	carga
	invertir
	sumar
	sumar digitos
}
*\