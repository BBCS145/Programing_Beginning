#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n, m;
	int min = 1100;
	cin >> n >> m;
	vector<int>a(n);
	vector<int>b(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (i == 0)
			b[i] = a[i];
		else
			b[i] = a[i] - a[i - 1];
	}
	for (int j = 0; j < m; j++)
	{
		int x, y, num;
		cin >> x >> y >> num;
		b[x-1] += num;
		if (y == n)
			continue;
		else
		    b[y] -= num;
	}
	for (int i = 0; i < n; i++)
	{
		if (i == 0)
			a[i] = b[i];
		else
			a[i] = b[i] + a[i - 1];
		if (a[i] <= min)
			min = a[i];
	}
	cout << min;
}