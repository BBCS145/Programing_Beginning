#include<iostream>
#include<cstring>
using namespace std;

int w[500];
int a[500];
int dp[500][500];
int main()
{
	int m, n;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i] >> w[i];
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j <= m; j++)
		{
			dp[i][j] = dp[i - 1][j];
			if (j >= a[i])
			{
				dp[i][j] = max(dp[i][j], dp[i - 1][j - a[i]] + w[i]);
			}
		} 
	}
	cout << dp[n][m] << endl;
	memset(dp, -0x3f, sizeof dp);
	dp[0][0] = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j <= m; j++)
		{
			dp[i][j] = dp[i - 1][j];
			if (j >= a[i])
			{
				dp[i][j] = max(dp[i][j], dp[i - 1][j - a[i]] + w[i]);
			}
		}
	}
	if (dp[n][m] < 0)
		cout << 0;
	else
		cout << dp[n][m] << endl;
	return 0;
}