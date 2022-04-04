#include <iostream>
using namespace std;
int main()
{
	int n,contador, primo;
	for (n = 1; n <= 500; n++)
	{
		primo = 1;
		contador = 2;
		while (contador <= n / 2)
		{
			if (n % contador == 0)
				primo = 0;
			contador++;
		}
		if (primo)
			cout << "-" << n;
	}
	return 0;
}