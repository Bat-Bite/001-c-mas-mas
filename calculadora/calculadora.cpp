#define S1 " Ingrese un numero: "
#define S2 " Ingrese otro numero: "
#include <iostream>
#include <ctype.h>
#include <math.h>
using namespace std;
int main()
{
	char letra= 's';
	while (letra == 's')
	{
	long double n1, n2, r = 0;
	char opcion;
	cout << "\tCalculadora" << endl;
	cout << "\t===========" << endl;
	cout << "\t (a) Suma" << endl;
	cout << "\t (b) Resta" << endl;
	cout << "\t (c) Multiplicar" << endl;
	cout << "\t (d) Dividir" << endl;
	cout << "\t (e) Potencia"<< endl;
	cout << "\t (f) Raíz" << endl;
	cout << "\t (s) Salir" << endl;
	cout << " Ingresar opcion: ";
	cin >> opcion;
	opcion = tolower(opcion);
	system("cls");
	switch (opcion)
	{
	case 'a':
	{
		cout << S1;
		cin >> n1;
		cout << S2;
		cin >> n2;
		r = n1 + n2;
		cout << " El resultado de la suma es: " << r;
		break;
	}
	case 'b':
	{
		cout << S1;
		cin >> n1;
		cout << S2;
		cin >> n2;
		r = n1 - n2;
		cout << " El resultado de la resta es: " << r;
		break;
	}
	case 'c':
	{
		cout << S1;
		cin >> n1;
		cout << S2;
		cin >> n2;
		r = n1 * n2;
		cout << " el resultado de la multipicacion es: " << r;
		break;
	} //fin division
	case 'd':
	{
		cout << S1;
		cin >> n1;
		cout << S2;
		cin >> n2;
		while (n2 == 0)
		{
			cout << " Numero no valido, ingrese otro numero: ";
			cin >> n2;
		} //fin while case
		r = n1 / n2;
		cout << "la division es: " << r;
		break;
	} //division
	case 'e':{
		cout<< S1;
		cin>>n1;
		cout<<S2;
		cin>>n2;
		system("cls");
		r= pow(n1,n2);
		cout << " "<<n1<<" a la "<<n2 <<" es igual a: "<<r;
		break;
		}//Potencia
	case 'f':
	{
		cout<<S1;
		cin>>n1;
		cout<<" Ingrese raíz: ";
		cin>>n2;//x 1/n = n ^x 1
		r= pow(n1,(1/n2));
		cout<< " El resultado es: "<<r;
		break;
		}//Raiz
	case 's':
	{
		return 0;
		break;
	} //salir
	} //fin de switch
	cout<<endl<< " ¿Desea realizar otra operacion? (s/n): ";
	cin>>letra;
	letra= tolower(letra);
	system("cls");
		} //fin de while
	return 0;
}