#include <iostream>
using namespace std;
int main()
{
	int num, aux=0;
	cin>>num;
	while (num>0)
	{
		aux=aux+num%10;
		num=num/10;
		
		}
		cout<<aux;
	return 0;
}