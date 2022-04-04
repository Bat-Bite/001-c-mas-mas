#include <iostream>
using namespace std;
int main()
{
	int valor1, valor2;
	cout << "ingrese un numero:";
	cin >> valor1;
	cout << "ingrese otro numero:";
	cin >> valor2;
	if (valor1 > valor2)
	{
		cout << "el primer numero es> al segundo";
	}
	else
	{
		if (valor1<valor2)
		{
			cout<< "el primer numero es < al segundo";
		}
		else
		{
		cout << "los numeros son iguales";
	}
	}
	return 0;
}