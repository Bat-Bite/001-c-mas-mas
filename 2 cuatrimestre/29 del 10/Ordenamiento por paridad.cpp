#include <iostream>
using namespace std;
int main()
{
	int v[5], i, x, aux;
	for (i = 0; i < 5; i++)
	{
		cin >> v[i];
	}
	for (i = 1; i < 5; i++)
	{
		aux = v[i];
		x= i - 1;
		while ((aux > v[x]) && (x >= 0))
		{
			v[x + 1] = v[x];
			x= x- 1;
		}
		v[x+ 1] = aux;
	}
	for (i = 0; i < 5; i++)
	{
		cout << v[i] << "-";
	}
	return 0;
}