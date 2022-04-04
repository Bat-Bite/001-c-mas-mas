#include<iostream> 
using namespace std;
int fun()
{
	cout << "Hello";
	// We can write return in void
	return 0;
}
int main()
{
	char op;
	cin >> op;
	switch (op)
	{
	case 'a':
	{
		fun();
		break;
	}
	}
	return 0;
}