#include<iostream>
#include<cstring>

using namespace std;
const long long mod = 1e9 + 7;

struct LL
{
	long long a[3][3];

	LL() { memset(a, 0, sizeof a); }



	LL operator *(const LL& b) const
	{
		LL tem;
		for (int i = 1; i <= 2; i++)
		{
			for (int j = 1; j <= 2; j++)
			{
				for (int k = 1; k <= 2; k++)
				{
					tem.a[i][j] += (a[i][k] * b.a[k][j]) % mod;
				}
			}
		}
		return tem;
	}
}ans, tem;

void start()
{
	ans.a[1][1] = 1;
	ans.a[1][2] = 1;
	tem.a[1][1] = tem.a[1][2] = tem.a[2][1] = 1;
	return;
}

void qpow(int n)
{
	while (n)
	{
		if (n & 1) ans = ans * tem;
		tem = tem * tem;
		n >>= 1;
	}
	return;
}

int main()
{
	start();
	long long n;
	cin >> n;
	if (n <= 2)
	{
		printf("1");
	}
	else
	{
		qpow(n - 2);
		printf("%d", ans.a[1][1] % mod);
	}
	return 0;
}