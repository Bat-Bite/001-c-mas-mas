//programa para calcular el factorial de un número
#include <iostream>
using namespace std;
int main()
{
	int n, i;
	long double factorial = 1;
	cout << "Introduce un numero: ";
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		factorial = factorial * i;
	}
	cout << "Factorial de " << n << " -> " << factorial << endl;
	system("pause");
	return 0;
}