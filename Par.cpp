#include <iostream>

using namespace std;

int main()
{
	int num = 0;
	cout<<"Ingrese numero:";
	cin>>num;
	bool primo = true;
	for ( int i = 2; i < num == true; i++)
	{
	if (num % i == 0) primo = false;
}
if (primo == false) printf ("no es primo");
else printf ("es primo");
return 0;
}