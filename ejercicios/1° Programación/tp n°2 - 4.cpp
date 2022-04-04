#include <iostream>
using namespace std;
int main()
{
	int n1, n2;
	cout << "Ingrese un numero: ";
	cin >> n1;
	cout << "Ingrese otro numero: ";
	cin >> n2;
	if (n1 == n2)
	{
		cout << n1 << " y " << n2 << " son iguales.";
	}
	else if (n1 > n2)
	{
		cout << "El menor es: " << n2 << endl;
	}
	else
	{
		cout << "El menor es :" << n1 << endl;
	}
	return 0;
}