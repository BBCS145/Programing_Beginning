#include<iostream>

using namespace std;

int arr[5001];
int dp[5001];
int maxa = 0;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	dp[0] = 1;
	for (int i = 1; i < n; i++)
	{
		dp[i] = 1;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] > arr[j])
				dp[i] = max(dp[i], dp[j] + 1);
		}
		maxa = max(dp[i], maxa);

	}
	cout << maxa;
	return 0;
}