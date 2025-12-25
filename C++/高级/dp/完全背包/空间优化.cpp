#include<iostream>
#include<cstring>

using namespace std;

int dp[1000001];
int v[10001], w[10001];

int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> v[i] >> w[i];
	for (int i = 1; i <= n; i++)
	{
		for (int j = v[i]; j <= m; j++)
		{
			dp[j] = max(dp[j], dp[j - v[i]] + w[i]);
		}
	}
	cout << dp[m] << endl;

	memset(dp, -0x3f, sizeof(dp));
	for (int i = 1; i <= n; i++)
	{
		for (int j = v[i]; j <= m; j++)
		{
			dp[j] = max(dp[j], dp[j - v[i]] + w[i]);
		}
	}
	if (dp[m] < 0)
		cout << 0;
	else
		cout << dp[m];
	return 0;
}
