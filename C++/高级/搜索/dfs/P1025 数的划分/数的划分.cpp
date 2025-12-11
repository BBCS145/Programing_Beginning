#include<iostream>
#include<vector>
using namespace std;
int n, m;
int num = 0;
int ret = 0;

void dfs(int pos, int beg)
{
	if (pos == m)
	{
		if (num == n)
			ret++;
		return;
	}
	if (num > n)
		return;
	for (int i = beg; i <= n - m + 1; i++)
	{
		if (num + (m - pos) * i > n)
			return;
		num += i;
		dfs(pos + 1, i);
		num -= i;
	}
}

int main()
{
	cin >> n >> m;
	dfs(0, 1);
	cout << ret;
}