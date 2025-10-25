#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

void plu(string a, string b,int x,int y)
{
	int j = 0;
	int d = 0;
	int c = 0;
	int num;
	if (x == y)
	{
		vector<string>ret(x);
		for (int i = x - 1; i >= 0; i--)
		{
			c = (a[i] - '0') + (b[i] - '0') + d;
			if (c >= 10)
			{
				d = c / 10;
				c = c % 10;
				ret[j] = c+'0';
			}
			else
			{
				ret[j] = c+'0';
				d = 0;
			}
			j++;
		}
		num = x - 1;
		if (d != 0)
		{
			ret.resize(x + 1);
			ret[x] = d+'0';
			num = x;
		}
		for (int q = num; q >= 0; q--)
			cout << ret[q];
		cout << endl;
	}
	else
	{
		vector<string>ret(x);
		for (int i = x - 1; i >= 0; i--)
		{
			if (y - 1 >= 0)
			{
				c = (a[i] - '0') + (b[y - 1] - '0') + d;
				if (c >= 10)
				{
					d = c / 10;
					c = c % 10;
					ret[j] = c + '0';
				}
				else
				{
					ret[j] = c + '0';
					d = 0;
				}
				j++;
				y--;
			}
			else
			{
				c = (a[i] - '0') + d;
				if (c >= 10)
				{
					d = c / 10;
					c = c % 10;
					ret[j] = c + '0';
				}
				else
				{
					ret[j] = c + '0';
					d = 0;
				}
				j++;
			}
		}
		num = x - 1;
		if (d != 0)
		{
			ret.resize(x + 1);
			ret[x] = d + '0';
			num = x;
		}
		for (int q = num; q >= 0; q--)
			cout << ret[q];
		cout << endl;
	}
}
int main()
{
	string a;
	string b;
	cin >> a >> b;
	int x = a.length();
	int y = b.length();
	if (x >= y)
		plu(a, b, x, y);
	else
		plu(b, a, y, x);
	int n, m;
	cin >> n >> m;
	cout << n + m;

	return 0;
}