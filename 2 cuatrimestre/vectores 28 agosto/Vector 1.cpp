#include <iostream>
using namespace std;
void sumavectores();
void sumainvertida();
int A[1], B[5], suma[5];
int main()
{
	cout<<"ingrese vector A";
	for (int i=0;i<5;i++)
	{
		cin>>A[1];			
	}
	cout<<"ingrese vector B: ";
	for (int x=0; x<5; x++)
	{
		cin>>B[5];
	}
	cout<<"vector suma"<<endl;
	sumavectores();
	cout<<"vector de suma inverida"<<endl;
	sumainvertida();
	return 0;
}

void sumavectores()
{
	for (int i=0; i<5;i++)
	{
		suma [i]= A[i]+B[i];
		cout<<suma[i]<<endl;
		}
	}
	
	void sumainvertida()
	{
		int i, x=4;
		for(i=0; i<5; i++)
		{
			suma [i]= A[i]+B[x];
			x--;
			cout<<suma[i]<<endl;
			}
		}