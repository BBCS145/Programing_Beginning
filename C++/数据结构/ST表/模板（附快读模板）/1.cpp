#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
const int con = 1e5 + 1;
int f[con][65];

inline int read()
{
	int x = 0, f = 1; char ch = getchar();
	while (ch < '0' || ch>'9') { if (ch == '-') f = -1; ch = getchar(); }
	while (ch >= '0' && ch <= '9') { x = x * 10 + ch - 48; ch = getchar(); }
	return x * f;
}


int main()
{
	int n, m;
	n = read();
	m = read();
	for (int i = 1; i <= n; i++)
		f[i][0] = read();
	int t = log2(n);
	for (int j = 1; j <= t; j++)
	{
		for (int i = 1; i <= n - (1 << j) + 1; i++)
		{
			f[i][j] = max(f[i][j - 1], f[i + (1 << (j - 1))][j - 1]);
		}
	}
	for (int i = 1; i <= m; i++)
	{
		int l, r;
		l = read();
		r = read();
		int k = log2(r - l + 1);
		printf("%d\n", max(f[l][k], f[r - (1 << k) + 1][k]));
	}
	return 0;
}