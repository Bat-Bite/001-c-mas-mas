#include <iostream>
namespace std;
int edad;
cin>> edad;
while ((edad<0)||(edad>110))
{
	cout<<"edad no valida";
	cin>>edad;
}
return 0