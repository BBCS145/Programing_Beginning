#include<iostream>
#include<cmath>
using namespace std;

int prime[100001];
int ans[100001];

int find(int x)
{
	if (ans[x] != x)
	{
		int p = find(ans[x]);
		ans[x] = p;
		return p;
	}
	else
		return x;
}

void unite(int x, int y)
{
	int r1 = find(x);
	int r2 = find(y);
	if (r1 != r2)
		ans[r1] = r2;
}

int isprime(int x)
{
	if (x == 2)
		return 1;
	for (int i = 2; i <= sqrt(x); i++)
	{
		if (x % i == 0)
			return 0;
	}
	return 1;
}

int main()
{
	int cnt = 0;
	int a, b, c;
	cin >> a >> b >> c;
	for (int i = c; i <= b; i++)
	{
		if (isprime(i) == 1)
		{
			prime[cnt] = i;
			cnt++;
		}
	}
	for (int i = a; i <=b; i++) ans[i] = i;
	for (int i = 0; i < cnt; i++)
	{
		int m = 1;
		while (m * prime[i] < a) m++;
		while ((m+1) * prime[i] <= b)
		{
			unite(m * prime[i], (m + 1) * prime[i]);
			m++;
		}
	}
	int num = 0;
	for (int i = a; i <= b; i++)
	{
		if (ans[i] == i)
			num++;
	}
	cout << num;
	return 0;
}