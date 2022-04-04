#include <iostream>
int vect[2][5];
using namespace std;
void lista();
int main()
{
int vect[1][4];
for(int x=0;x<=1;x++)
{
for(int i=0;i<=4;i++)
{
	cin>>vect[x][i];
}
}
lista();
return 0;	
}

void lista()
{
	for(int x=0;x<=1;x++)
	{
	for(int i=0;i<=4;i++)
	{
	cout<<vect[x][i]<<endl;	
	}
	}
}