#include <iostream>
using namespace std;
int main()
{
	int num;
	cout << "Ingrese numero:";
	cin >> num;
	bool primo = true;
	for (int i = 2; i < num == true; i++)
	{
		if (num % i == 0)
			primo = false;
	}
	if (primo == false)
		cout << "no es primo";
	else
		cout << "es primo";
	return 0;
}