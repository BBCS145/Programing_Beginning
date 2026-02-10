#include<iostream>
#include<stack>
using namespace std;
const int con = 1e6 + 1;
int ans[con];
int arr[con];
int v[con];

int main()
{
	int maxa = 0;
	stack<int>s1;
	stack<int>s2;
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> arr[i] >> v[i];
	for (int i = n; i >= 1; i--)
	{
		while (!s1.empty() && arr[s1.top()] <= arr[i])
			s1.pop();
		if (s1.empty()) s1.push(i);
		else
		{
			ans[s1.top()] += v[i];
			s1.push(i);
		}
	}
	for (int i = 1; i <= n; i++)
	{
		while (!s2.empty() && arr[s2.top()] <= arr[i])
			s2.pop();
		if (s2.empty()) s2.push(i);
		else
		{
			ans[s2.top()] += v[i];
			s2.push(i);
		}
	}
	for (int i = 1; i <= n; i++) maxa = max(ans[i], maxa);
	cout << maxa;
	return 0;
}