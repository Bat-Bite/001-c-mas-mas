#include <iostream>
#include <string>
using namespace std;
int main()
{
	int Numeros [4]={1,1,1,3};
	int xxx[4]={0,0,0,0};
	int aux =0;
	cin>> Numeros;
	for(int i=0;i<4; i++)
	{
	xxx[i]+= Numeros[i];
	cout<<xxx[i]<<endl;
	aux+=xxx[i];
	}
	cout<<"\t"<<aux;
}