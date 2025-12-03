#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;

int n, m;
vector<int>arr;

void dfs(int pos, int beg)
{
	if (pos > m)
	{
		for (int j = 0; j < m; j++)
			cout << setw(3) << arr[j];
		cout << endl;
		return;
	}
	for (int i = beg; i <= n; i++)
	{
		arr.push_back(i);
		dfs(pos + 1, i + 1);
		arr.pop_back();
	}
}

int main()
{
	cin >> n >> m;
	dfs(1, 1);
	return 0;
}