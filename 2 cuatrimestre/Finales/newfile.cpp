#include <iostream>
using namespace std;
int vec[4];
void sumainvertida();
void cargar();
int main()
{
	cargar();
	cout<<"\r";
	sumainvertida();
	return 0;
}

void sumainvertida()
{
	int aux = 0;
	for (int i = 0; i < 5; i++)
	{
		aux = aux + vec[i];
		cout<<"\t"<<aux;
	}
	cout << aux;
}

void cargar()
{
	cout << "ingresar vec: ";
	cin >> vec[4];
}