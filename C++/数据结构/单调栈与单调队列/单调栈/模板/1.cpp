#include<iostream>
#include<stack>
#include<cstdio>
using namespace std;
const int con = 3e6;
int arr[con];
int ans[con];
int main()
{
	stack<int>num;
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];
	}
	for (int i = n; i >= 1; i--)
	{
		while (!num.empty() && arr[num.top()] <= arr[i])
			num.pop();
		ans[i] = num.empty() ? 0 : num.top();
		num.push(i);
	}
	for (int i = 1; i <= n; i++) cout << ans[i] << ' ';
	return 0;
}