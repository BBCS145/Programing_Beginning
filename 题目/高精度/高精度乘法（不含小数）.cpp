#include<iostream>
#include<string>
#include<vector>
using namespace std;
int x[500];
int y[500];
int z[2501];

int main()
{
	string a, b;
	cin >> a >> b;
	int l1 = a.length();
	int l2 = b.length();
	for (int i = 0; i < l1; i++)
		x[l1 - 1 - i] = a[i] - '0';
	for (int i = 0; i < l2; i++)
		y[l2 - 1 - i] = b[i] - '0';
	if ((l1 == 1 && x[0] == 0) || (l2 == 1 && y[0] == 0))
		cout << 0;
	else
	{
		for (int j = 0; j < l1; j++)
		{
			for (int i = 0; i < l2; i++)
			{
				int c = x[j] * y[i];
				if (c + z[i + j] >= 10)
				{
					z[i + j + 1] += (c + z[i + j]) / 10;
					z[i + j] = (c + z[i + j]) % 10;
				}
				else
				{
					z[i + j] += c;
				}
			}
		}
		if (z[l1 + l2 - 1] != 0)
		{
			for (int i = l1 + l2 - 1; i >= 0; i--)
				cout << z[i];
		}
		else
		{
			for (int i = l1 + l2 - 2; i >= 0; i--)
				cout << z[i];
		}
	}
	return 0;
}