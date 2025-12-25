#include<iostream>
#include<cstring>

using namespace std;

int dp[10000][10000];
int v[1000], w[1000];

int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> v[i] >> w[i];
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j <= m; j++)
		{
			dp[i][j] = dp[i - 1][j];
			if (j >= v[i])
			{
				dp[i][j] = max(dp[i][j], dp[i][j - v[i]] + w[i]);
			}
		}
	}
	cout << dp[n][m] << endl;
	
	memset(dp, -0x3f, sizeof(dp));
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j <= m; j++)
		{
			dp[i][j] = dp[i - 1][j];
			if (j >= v[i])
			{
				dp[i][j] = max(dp[i][j], dp[i][j - v[i]] + w[i]);
			}
		}
	}
	if (dp[n][m] < 0)
		cout << 0;
	else
		cout << dp[n][m];
	return 0;
}