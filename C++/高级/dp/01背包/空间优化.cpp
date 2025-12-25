#include<iostream>
#include<cstring>

using namespace std;

int dp[100000];
int v[1000], w[1000];


int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> v[i] >> w[i];
	for (int i = 1; i <= n; i++)
	{
		for (int j = m; j >=v[i]; j--)
		{
			dp[j] = max(dp[j], dp[j - v[i]] + w[i]);
		}
	}
	cout << dp[m] << endl;

	memset(dp, -0x3f, sizeof(dp));
	dp[0] = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = m; j >= v[i]; j--)
		{
			dp[j] = max(dp[j], dp[j - v[i]] + w[i]);
		}
	}
	
	cout << dp[m];
	return 0;
}