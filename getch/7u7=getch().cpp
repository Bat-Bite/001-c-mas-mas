#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	char op;
	for (int i = 1; i <= 30; i++)
	{
		cin >> op;
		op = getch();
		if (op <= 47)
		{
			cout << op << "inserte una letra: ";
		}
		else if (op >= 48)
		{
			cout << "-" << endl;
		}
	}
	return 0;
}