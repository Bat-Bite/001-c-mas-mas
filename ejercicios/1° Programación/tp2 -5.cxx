#define S1" Ingrese un numero: "
#define S2 " Ingrese otro numero: "
#include <iostream>
using namespace std;
int main()
{
	int aux=0;
	for (int n1, i=1;i <=5; i++)
	{
		cout<<S1;
	cin >>n1;
	if(n1>=25){aux ++;}
	}
	cout<<aux;	
	return 0;
}