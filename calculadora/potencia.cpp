#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
int main()
{
	int opcion = 1;
   long double i ,numero, num= 1;
   long double res=0;
  while(opcion == 1){
   cout<< "Introduzca potencia: ";
   cin>>num;
   cout << "¿Hasta que numero entero?: ";
   cin >> numero;
   cout<< "\n";
   if(numero <= -1)
   {
   	numero= -1*numero;
   	}
   if (numero>1)
   {
      for ( i=0; i<=numero; i++)
      {
         cout << i<<"^"<<num<< "="<<pow(i,num)<<endl;
      }
   }
   else
   cout<< "Error";
   system("pause");
   cout<< "1:otra operacion. 2:salir  ";
   cin>> opcion;
   system ("cls");
  }
   return 0;
}