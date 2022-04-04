/*Cuenta las vocales abiertas y cerradas*/
#include <iostream>
#include <ctype.h>
using namespace std;
int main()
{
	char letra;
	int i = 0, vocal_a = 0, vocal_c = 0;
	while (i <= 10)
	{
		cout << " Ingrese caracter (" << i << "):";    	cin >> letra;
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
	cout << "\t total de vocales:" << vocal_a + vocal_c;
	cout << endl<< "\t vocales abiertas: " << vocal_a;
	cout << endl << "\t vocales cerradas:" << vocal_c;
	return 0;
}