#include<iostream>
#include<deque>
using namespace std;
const int con = 1e6 + 1;
int arr[con];
int ans1[con];
int ans2[con];

int main()
{
	deque<int>q1;
	deque<int>q2;
	int n, k;
	cin >> n >> k;
	for (int i = 1; i <= n; i++) cin >> arr[i];
	for (int tail = 1; tail <= n; tail++)
	{
		while (!q1.empty() && q1.front() < tail - k + 1)
			q1.pop_front();
		while (!q2.empty() && q2.front() < tail - k + 1)
			q2.pop_front();
		while (!q1.empty() && arr[q1.back()] <= arr[tail])
			q1.pop_back();
		q1.push_back(tail);
		while (!q2.empty() && arr[q2.back()] >= arr[tail])
			q2.pop_back();
		q2.push_back(tail);
		if (tail >= k)
			ans1[tail] = arr[q1.front()];
		ans2[tail] = arr[q2.front()];
	}
	for (int i = k; i <= n; i++)
		cout << ans2[i] << ' ';
	cout << endl;
	for (int i = k; i <= n; i++)
		cout << ans1[i] << ' ';
	return 0;
}