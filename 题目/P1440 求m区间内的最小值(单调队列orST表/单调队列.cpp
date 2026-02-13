#include<iostream>
#include<deque>
using namespace std;
const int con = 2e6 + 1;
int arr[con];

int main()
{
	deque<int>q;
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) cin >> arr[i];
	cout << 0 << endl << arr[0] << endl;
	q.push_back(0);
	for (int tail = 1; tail < n-1 ; tail++)
	{
		while(tail - q.front() >= m &&!q.empty())
			q.pop_front();
		while (!q.empty() && arr[q.back()] >= arr[tail])
			q.pop_back();
		q.push_back(tail);
		cout << arr[q.front()] << endl;
	}
	return 0;
}