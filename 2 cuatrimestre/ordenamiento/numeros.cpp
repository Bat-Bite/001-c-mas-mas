#include <iostream>
#include <stdlib.h>
using namespace std;
void ordenar(int vector[]);
int main()
{
	int vector[8];
	for (int i = 0; i <9; i++)
	{
		cin >> vector[i];
	}
	system("cls");
	ordenar(vector);
	for(int i=0;i<9;i++)
	{
		if(i==0)
		{
			cout<<"numeros originales: "<<endl;
			}
		cout<<"^"<<vector[i]<<endl;
		}
	return 0;
}

void ordenar(int vector[])
{
	int aux, i=0,x=0;
	for (i = 8; i>-1;i--)
	{
		for(x=0;x<i;x++){
		if (vector[x] > vector[i + 1])
		{
			aux = vector[x];
			vector[i] = vector[x+ 1];
			vector[x+ 1] = aux;
		}
		}
	}
	for (i = 0; i<9; i++)
	{
		cout << vector[i] << " - ";
	}
	cout<<endl;
}