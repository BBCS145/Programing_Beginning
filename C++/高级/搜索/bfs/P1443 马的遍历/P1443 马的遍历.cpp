#include<iostream>
#include<queue>
#include<cstring>
using namespace std;

int m, n, x, y;
const int N = 400;
int arr[N][N];

int dx[] = { 1,1,2,2,-1,-1,-2,-2 };
int dy[] = { 2,-2,1,-1,2,-2,1,-1 };

typedef pair<int, int> li;

void bfs()
{
	queue<li>set;
	memset(arr, -1, sizeof(arr));
	arr[x][y] = 0;
	set.push({ x,y });
	while (set.size() != 0)
	{
		auto l = set.front();
		int p = l.first;
		int q = l.second;
		for (int i = 0; i < 8; i++)
		{
				int x = p + dx[i];
				int y = q + dy[i];
				if (x < 1 || x> m || y < 1 || y> n) continue;
				if (arr[x][y] != -1) continue;
				arr[x][y] = arr[p][q] + 1;
				set.push({ x,y });
		}
		set.pop();
	}
}

int main()
{
	cin >> m >> n >> x >> y;

	bfs();

	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}
	return 0;
}
