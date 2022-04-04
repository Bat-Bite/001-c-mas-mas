#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int cont1, cont2,x=1;
	while (x)
	{
		cout << "1:Crear contraseña. 2.Ingresar al sistema";
		cin>> op;
		switch (op)
		{
		case 1:
		{
			cout << "ingrese contraseña: ";
			break;
		}
		case 2:
		{
			while (cont1 != cont2)
			{
				cout << "contraseña incorrecta";
				cin >> cont1;
			} //while case
			cout<< "bienvenido al sistema";
			x=1;
		}//case 2
		} //switch
	}//whikex
	return 0;
}