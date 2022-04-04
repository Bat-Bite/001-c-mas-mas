#include <iostream>
using namespace std;
int main()
{
    int num, cuentapar = 0, sumapar = 0;
    float promedio = 0;
    for (int i = 1; i <= 10; i++)
    {
        cout << i << ;
        cin >> num;
        if ((num % 2) == 0);
        {
            cuentapar = cuentapar + 1;
            sumapar = sumapar + num;
        }
    }
    promedio = sumapar / cuentapar;
    cout <<”El promedio de los números pares es : “<< promedio;
    return 0;
}