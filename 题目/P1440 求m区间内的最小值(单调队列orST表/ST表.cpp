#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;
const int con = 2e6 + 1;
int arr[con][65];

void check(int l, int r)
{
	int p = log2(r - l + 1);
	printf("%d\n", min(arr[l][p], arr[r - (1 << p) + 1][p]));
	return;
}

int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) cin >> arr[i][0];
	int k = log2(m);
	for (int j = 1; j <= k; j++)
	{
		for (int i = 1; i <= n - (1 << j) + 1; i++)
		{
			arr[i][j] = min(arr[i][j - 1], arr[i + (1 << (j - 1))][j - 1]);
		}
	}
	cout << 0 << endl;
	for (int i = 1; i < m; i++)
		check(1, i);
	for (int i = 1; i <= n - m; i++)
		check(i, i + m - 1);
	return 0;
}