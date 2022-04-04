#include <iostream>
#include <ctype.h>
using namespace std;
int main()
{
	int opcion = 1;
	do
	{
		cout << "1-iniciar" << endl;
		cout << "2-Salir" << endl;
		cin >> opcion;
		switch (opcion)
		{
		case 1:
		{
			char letra;
			int i = 0, d = 10, vocal_a = 0, vocal_c = 0;
			while (i <= 9)
			{
				cout << " Ingrese caracter ("<<d-i<<"):";
				cin >> letra;
				system("cls");
				letra = tolower(letra);
				if ((letra == 'i') || (letra == 'u'))
				{
					vocal_c++;
				}
				if ((letra == 'a') || (letra == 'e') || (letra == 'o'))
				{
					vocal_a++;
				}
				i = i + 1;
			}
			cout << "\t total de vocales:" << vocal_a + vocal_c << endl;
			cout << "\t vocales abiertas: " << vocal_a << endl;
			cout << "\t vocales cerradas:" << vocal_c << endl;
			system("pause");
			system("cls");
		}
		break;
		case 2: break;
		}
	}
		while (opcion != 2);
		system("pause");
	}
