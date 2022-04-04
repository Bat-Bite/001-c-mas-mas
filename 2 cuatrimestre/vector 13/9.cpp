#include <iostream>
using namespace std;
int main()
{
	int mat[3][4], suma[] = {0, 0, 0};
	int mayor[3], i, f, c, m = -1000;
	float prom[3];
	for (f = 0, i < 3; i++)
	{
		for (c = 0; c < 4, c++)
		{
			cin >> mat[f][c];
		}
	}
	for (f = 0; f < 3; f++)
	{
		for (c = 0; c < 4; c++)
		{
			suma[f] = suma[f] + mat[f][c];
		}
		prom[f] = suma[f] / 4;
		for (f = 0; f < 3; f++)
		{
			for (c = 0; c < 4; c++)
			{
				if (mat[f][c] > m)
				{
					m = mat[f][c];
				}
			}
			mayor[f] = m;
			m = -1000;
		}
		for (f = 0; f < 3; f++)
		{
			cout << suma[f] << "\t" << prom[f] << "\t" << mayor[f] << endl;
		}
		return 0;
	}
}