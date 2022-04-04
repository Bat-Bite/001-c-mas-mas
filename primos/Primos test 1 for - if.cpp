#include <iostream>
#include <ctype.h>
using namespace std;
int main()
{
	char letra= 's';
	while (letra == 's')
	{
{
	int i, num, resto = 0;
	cout << " Ingresar numero: ";
	cin >> num;
	for (i = 1; i <= num; i++)
	{
		if (num%i == 0)
		{
			resto++;
		}
	}
	if ((resto == 2)||(resto == 1))
	{
		cout << " El numero es primo" << endl;
	}
	else
	{
		cout << " El numero no es primo" << endl;
	}
}
cout<< endl<<" Ingresar otro numero (s/n): \r" ;
cin>> letra;
}
return 0;
}