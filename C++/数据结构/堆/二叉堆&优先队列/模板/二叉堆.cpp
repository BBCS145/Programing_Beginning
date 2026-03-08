#include<iostream>
#include<queue>

using namespace std;

struct node
{
	int x;
	bool operator <(const node& a) const
	{
		return x > a.x;
	}
}k;

int main()
{
	priority_queue<node> q;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int p;
		cin >> p;
		if (p == 1)
		{
			int c;
			cin >> c;
			node m;
			m.x = c;
			q.push(m);
		}
		else if (p == 2)
		{
			cout << q.top().x;
		}
		else
		{
			q.pop();
		}

	}
	return 0;
}