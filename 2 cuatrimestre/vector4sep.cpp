#include <iostream>
using namespace std;
int main()
{
	char sexo[10], auxsex;
	int edad[10], auxedad, i, x;
	float altura[10], aux;
	for (i = 0; i < 10; i++)
	{
		cout << "ingrese edad de persona" << i + 1 << ":";
		cin >> edad[i];
		cout << "ingrese sexo de la persona" << i + 1 << ":";
		cin >> sexo[i];
		cout << "ingrese altura de la persona" << i + 1 << ":";
		cin >> altura[i];
	} //se informa listado sexo,fem

	for (x = 9; x >= 0; x--)
	{
		for (i = 0; i < x; i++)
		{
			if(altura[i]<altura[i+1])
			{
				aux=altura[i];
				auxedad=edad[i];
				auxsex=sexo[i];
				altura[i]=
				edad 
				sexo
				altura
				edad
				sexo
				}//fin de if
		}//fin de ciclo de i
	}//fin de ciclo de x
	return 0;
}