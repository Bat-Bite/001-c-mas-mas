#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
const int Larg = 12;
using namespace std;
int main()
{
	char cadena[Larg], palindromo[Larg];
	int i = 0, c, if2 = 0;
	cout << "Ingresar palindromo: ";
	cin.getline(cadena, Larg);
	system("cls");
	for (i = 0; cadena[i] != '\0'; i++)
	{
		cadena[i] = tolower(cadena[i]);
		c=i;
	}	
for (i = 0; cadena[i] != '\0'; i++, c--)
	{
		palindromo[i] = cadena[c];
		if (cadena[i] != palindromo[i])
		{
			if2 += 1;
		}
	}
	
	if (if2 == 0)
	{
cout << cadena << ": Es palindromo" << endl;
	}
	else
	{
		cout << cadena << ": No es palindromo" << endl;
	}
	return 0;
}