#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

const long long con = 1e7 + 1;
long long arr[con] = { 0 };
int n, m;


void front()
{
	for (int i = 2; i <= n; i++)
	{
		arr[i] = arr[i] + arr[i - 1];
	}
}


int main()
{
	scanf("%d%d", &n, &m);
	for (int i = 0; i < m; i++)
	{
		long long a, b, c, d;
		scanf("%lld%lld%lld%lld", &a, &b, &c, &d);
		long long l = (d - c) / (b - a);
		arr[a] += c;
		arr[a + 1] += (l - c);
		if (b != n)
			arr[b + 1] -= (d + l);
		if (b != n - 1)
			arr[b + 2] += d;
	}
	front();
	front();
	long long max = arr[1];
	long long ans = arr[1];
	for (int i = 2; i <= n; i++)
	{
		if (max < arr[i])
			max = arr[i];
		ans ^= arr[i];
	}
	printf("%lld %lld", ans, max);
	return 0;
}