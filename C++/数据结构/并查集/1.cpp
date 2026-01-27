#include<iostream>
using namespace std;

int arr[200001];

int find(int x)
{
	if (x != arr[x])
	{
		int a = find(arr[x]);
		arr[x] = a;
		return a;
	}
	else
		return x;
}

void unite(int x, int y)
{
	int r1 = find(x);
	int r2 = find(y);
	arr[r1] = r2;
}



int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		arr[i] = i;
	for (int i = 1; i <= m; i++)
	{
		int r, a, b;
		cin >> r >> a >> b;
		if (r == 1)
		{
			unite(a, b);
		}
		else
		{
			if (find(a) != find(b))
				cout << "N" << endl;
			else
				cout << "Y" << endl;
		}
	}
	return 0;
}