#include <iostream>
using namespace std;
int main()
{
	char opcion, letra;
	int i = 0, vocal_a = 0, vocal_c = 0;
	opcion = 'y';
	while ((opcion == 'y')||(opcion == 'Y')&(i <= 2))
			{{
				cout << " Ingrese caracter (" << i << "):";
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
			cout << "\t total de vocales:" << vocal_a + vocal_c<<endl;
			cout << "\t vocales abiertas: " << vocal_a<<endl;
			cout << "\t vocales cerradas:" << vocal_c << endl;
			system("pause");
			system("cls");
		}
	cout<< " ¿Desea ejecutar nuevamente?(y/n):";
	cin>> opcion;
	system("cls");
	return 0;
}
	


