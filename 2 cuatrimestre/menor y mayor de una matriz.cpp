#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char cadena[5][15];
	int cadena2[5], min=15, max = -1;
	for (int i = 0; i <= 5; i++)
	{
		cin.getline(cadena[i], 15);
		cadena2[i] = strlen(cadena[i]);
		if (cadena2[i] < min)
		{
			min = cadena2[i];
		}
		if (cadena2[i] > max)
		{
			max =cadena2[i];
		}
	}
	cout<<"Menor: "<<min<<endl<<"Mayor: "<<max;
	return 0;
}