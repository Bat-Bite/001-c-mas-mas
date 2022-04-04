#define S1 " Ingrese un numero: "
#define S2 " Ingrese otro numero: "
#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;
int main()
{
	int i;
	char char1 = 's';
	while (char1 == 's')
	{
		long double n1, n2, r = 0;
		{
			cout << S1;
			cin >> n1;
			cout << S2;
			cin >> n2;
			system("cls");
			r = pow(n1, n2);
			cout << " " << n1 << " a la " << n2 << " es igual a: " << r << endl;
		}
		cout << " Desea realizar otra operacion (s/n)";
		cin >> char1;
		char1 = tolower(char1);
		system("cls");
	} //fin while1
	return 0;
}