#include <iostream>
using namespace std;
int main()
{
	int numero;
	do{
		cout<< "digite un numero: ";
		cin>>numero;
	}
	while ((numero<1)||(numero>10));
	for (int i=1;i<=20;i++)
	{
cout<<numero<<"×"<<i<< "= "<<numero*i<<endl;
	}
	cout <<"\n \n";
	return 0;
}