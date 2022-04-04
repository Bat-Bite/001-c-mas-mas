#include <iostream>
using namespace std;
void inter(int vector[]);
int main()
{
int vector[2];
cin>>vector[0]>>vector[1];
inter(vector);
cout<<"originales :"<<vector[0]<<vector[1];
return 0;	
}

void inter(int vector[])
{
	cout<<vector[0]+vector[1]<<endl;
	}