#include <iostream>
#include <ctype.h>
using namespace std;
int main()
{
	char opcion[1];
	cout <<" 7u7 (y/n): ";
	cin>>opcion;
	system("cls");
	while (opcion == 'y')
		{
		{	char letra;
			int i = 0, z = 10, vocal_a = 0, vocal_c = 0;
			while (i <= 9)
			{
				cout << " Ingrese caracter (" <<z-i<< "):";
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
		} //Fin de vocales
		
	cout<< " ¿Desea ejecutar nuevamente? (y/n): ";
	cin>> opcion;
	system("cls");
}//fin while
return 0;
	}