#include <iostream>
using namespace std;
int main()
{
	float nota;
	cout << "\n   ingresar nota: ";
	cin >> nota;
	if (nota >= 7)
		cout << "\n APROBADO";
	else
		cout << "SUSPENDIDO";
	return 0;
}
