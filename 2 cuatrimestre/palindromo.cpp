#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
using namespace std;
int main()
{
	char cadena[12], palindromo[12];
	int i = 0, c = 0, d = 1, if2 = 0;
	cout << "Ingresar palindromo: ";
	cin.getline(cadena, 12);
	system("cls");
	for (i = 0; cadena[i] != '\0'; i++)
	{
		cadena[i]=tolower(cadena[i]);
		c = i;
	}
	d = c + 1;
	for (i = 0; cadena[i] != '\0'; i++,c--)
	{
		palindromo[c] = cadena[i];
	}

	for (i = 0; cadena[i] != '\0'; i++)
	{
		if (cadena[i] == palindromo[i])
		{
		}
		else
		{
			if2 = if2 + 1;
		}
	}
	if (if2 == 0)
	{
		cout <<cadena<< ": Es palindromo" << endl;
	}
	else if (if2>0)
	{
		cout << "No es palindromo";
	}
	return 0;
}