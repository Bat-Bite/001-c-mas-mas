#include <iostream>
using namespace std;
int main()
{
	int numero;
	cout << "ingrese numero: ";
	cin >> numero;
	for (int i = 1; i <= 100; i++)
	{
		cout << numero << " x " << i << " =" << i*numero<< endl;
	}
	return 0;
}