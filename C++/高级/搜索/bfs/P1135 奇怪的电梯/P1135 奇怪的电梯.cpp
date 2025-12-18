#include<iostream>
#include<queue>
#include<cstring>


using namespace std;
queue<int>stair;
int arr[400];
int dis[400];

int main()
{
	int n, x, y;
	cin >> n >> x >> y;
	int a = x - 1;
	int b = y - 1;
	memset(arr, -1, sizeof(arr));
	for (int i = 0; i < n; i++)
		cin >> dis[i];
	arr[a] = 0;
	stair.push(a);
	while (stair.size() != 0)
	{
		if (stair.front() - dis[stair.front()] >= 0)
		{
			int tem = stair.front() - dis[stair.front()];
			if (arr[tem] == -1)
			{
				arr[tem] = arr[stair.front()] + 1;
				stair.push(tem);
			}
		}
		if (stair.front() + dis[stair.front()] < n)
		{
			int tem = stair.front() + dis[stair.front()];
			if (arr[tem] == -1)
			{
				arr[tem] = arr[stair.front()] + 1;
				stair.push(tem);
			}
		}
		stair.pop();
	}
	cout << arr[b];
}