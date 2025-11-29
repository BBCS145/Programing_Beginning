#include<iostream>
#include<bitset>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	long long result = 1;
	while (m != 0)
	{
		if (m & 1)
			result *= n;
		n *= n;
		m = m >> 1;
	}
	cout << result;
}