#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int cont1, cont2, x = 1, op, op2;
	float saldo = 500, retiro;
	do
	{
		cout <<endl<<"1:Crear contraseña."<<endl;
		cout<<"2:Ingresar al sistema."<<endl;
		cout<<"3:Salir."<<endl;
		cin >> op;
		system("cls");
		switch (op)
		{
		case 1:
		{
			cout << "Ingrese contraseña: ";
			cin >> cont2;
			system("cls");
			break;
		}
		case 2:
		{
			cout << "Ingresar contraseña: ";
			cin >> cont1;
			system("cls");
			while (cont1 != cont2)
			{
				cout << "Contraseña incorrecta, vuelva a ingresar la contraseña: ";
				cin >> cont1;
				system("cls");
			} //while case
			cout << "Bienvenido al sistema" << endl;
			cout << "1.Retirar dinero.\n2.Ingresar dinero.\n3.Salir.";
			cin >> op2;
			system("cls");
			switch (op2)
			{
			case 1:
			{
				cout << "Su saldo en cuenta es: $" << saldo << "\nIngrese monto a retirar: $";
				cin >> retiro;
				system("cls");
				while (saldo < retiro)
				{
					cout << "Saldo insuficiente.\nSu saldo en cuenta es: $" << saldo << endl;
					cout << "¿Cuanto desea retirar?: $";
					cin >> retiro;
				} //while retiro
				saldo = saldo - retiro;
				cout << "Accion completada.\nSu saldo actual es: $" << saldo;
				break;
			}
			case 2:
			{
				cout << "ingrese monto a ingresar: $";
				cin >> retiro;
				saldo= saldo+retiro;
				cout << "Accion completada. Su saldo actual es: $" <<saldo;
				break;
			}
			system ("pause");
			case 3:
			{
				return 0;
			}//fin de case 3
			}	  //switch op2
			//x = 0; //while correcto
		}		   //case 2
		}
		system("cls"); //switch op
	} //do while
	while (op != 3);
	{ 
		return 0;
	}
	return 0;
}