#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

typedef unordered_map<int, vector<int>> LI;

int main()
{
	LI a;
	a.insert({ 1,{2,3} });
	a.insert({ 2,{3,4} });
	a.insert({ 3,{1,2} });
	a.insert({ 4,{3,2} });
	for (auto i = a.begin(); i != a.end(); i++)
	{
		cout << i->first << ' ';
		for (auto j = (i->second).begin(); j != (i->second).end(); j++)
		{
			cout << *j << ' ';
		}
		cout << endl;
	}
	int x, y;
	cin >> x >> y;
	for (auto i = a.begin(); i != a.end(); i++)
	{
		if (i->first == x)
		{
			int q = 0;
			for (auto j = (i->second).begin(); j != (i->second).end(); j++)
			{
				if (*j == y)
				{
					cout << "yes" << endl;
					q = 1;
					break;
				}
			}
			if (q == 0)
				cout << "no" << endl;
		}
	}
	return 0;
}