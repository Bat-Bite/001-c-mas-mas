#include <iostream>
using namespace std;
int inter(int vector[]);
int main()
{
	int vector[10];
	for (int i = 0; i <=10; i++)
	{
		cin >> vector[i];
	}
	if (inter(vector)>0)
	{
		
		cout<<"peeerrroooo";
		}
	return 0;
}

int inter(int vector[])
{
	int aux, i=0,x=0;
	for (x = 0; x< 10;x++)
	{
		for(i=0;i<10;i++){
		if (vector[i] > vector[i + 1])
		{
			aux = vector[i];
			vector[i] = vector[i + 1];
			vector[i + 1] = aux;
		}
		}
	}
for (i = 0; i<=10; i++)
	{
		cout << vector[i] << " - ";
	}
}