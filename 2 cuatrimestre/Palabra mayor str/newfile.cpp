#include <string>
#include <iostream>
using namespace std;
int main()
{
	char palabras[5][15];
	int x;
	int i, max = -1, min = 15, auxmax, auxmin;
	for (i = 0; i < 5; i++)
	{
		cin >> palabras[i];
		x = strlen(palabras[i]);
		if (x > max)
		{
			max = x;
			auxmax = i;
		}
		if (x < min)
		{
			min = x;
			auxmin = i;
		}
	}
	cout << palabras[auxmax] << endl
		 << palabras[auxmin];
}