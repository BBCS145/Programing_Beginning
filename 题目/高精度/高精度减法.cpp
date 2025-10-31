#include<iostream>
#include<string>
#include<vector>
using namespace std;
int x[500];
int y[500];
int z[500];

int judge(int l1, int l2, string a, string b)
{
	if (l1 > l2)
		return 1;
	else if (l1 == l2)
	{
		int jud2 = 0;
		for (int i = 0; i < l1; i++)
		{
			if (a[i] > b[i])
			{
				jud2 = 1;
				break;
			}
			else if (a[i] < b[i])
			{
				jud2 = -1;
				break;
			}
		}
		if (jud2 == 1)
			return 1;
		else
			return -1;
	}
	else
		return -1;
}
int main()
{
	int jud;
	string a, b;
	cin >> a >> b;
	int l1 = a.length();
	int l2 = b.length();
	for (int i = l1 - 1; i >= 0; i--)
		x[l1 - 1 - i] = a[i] - '0';
	for (int i = l2 - 1; i >= 0; i--)
		y[l2 - 1 - i] = b[i] - '0';
	jud = judge(l1, l2, a, b);
	if (jud == 1)
	{
		int j;
		for (j = 0; j < max(l1, l2); j++)
		{
			int c = x[j] - y[j];
			if (z[j] + c < 0)
			{
				z[j + 1]--;
				z[j] = z[j] + c + 10;
			}
			else
			{
				z[j] = z[j] + c;
			}
		}
		if (z[max(l1, l2) - 1] == 0)
		{
			for (int i = max(l1, l2) - 2; i >= 0; i--)
			{
				cout << z[i];
			}
		}
		else
		{
			for (int i = max(l1, l2) - 1;i>=0; i--)
			{
				cout << z[i];
			}
		}
	}
	else
	{
		int j;
		for (j = 0; j < max(l1, l2); j++)
		{
			int c = y[j] - x[j];
			if (z[j] + c < 0)
			{
				z[j + 1]--;
				z[j] = z[j] + c + 10;
			}
			else
			{
				z[j] = z[j] + c;
			}
		}
		cout << '-';
		if (z[max(l1, l2) - 1] == 0)
		{
			for (int i = max(l1, l2) - 2; i >= 0; i--)
			{
				cout << z[i];
			}
		}
		else
		{
			for (int i = max(l1, l2) - 1; i >= 0; i--)
			{
				cout << z[i];
			}
		}
	}
	return 0;
}
