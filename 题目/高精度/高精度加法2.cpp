#include<iostream>
#include<string>
#include<vector>
//不建议使用vector定义数组，因为vector定义数组的长度有限（string的好像另说)
using namespace std;
int a1[501] = { 0 };
int a2[501] = { 0 };
int a3[501] = { 0 };
int main()
{
	string a, b;
	cin >> a >> b;
	int l1 = a.length();
	int l2 = b.length();
	for (int i = 0; i < l1; i++)
		a1[i] = a[l1 -1 - i]-'0';
	for (int i = 0; i < l2; i++)
		a2[i] = b[l2 - 1 - i]-'0';
	int q;
	for (q = 0; q < max(l1, l2); q++)
	{
		int c = a1[q] + a2[q];
		if (c+a3[q] >= 10)
		{
			a3[q + 1]++;
			a3[q] = a3[q] + c - 10;
		}
		else
		{
			a3[q] += c;
		}
	}
	if (a3[q] == 0)
	{
		for (int p = max(l1, l2) - 1; p >= 0; p--)
			cout << a3[p];
	}
	else
	{
		for (int p = max(l1, l2); p >= 0; p--)
			cout << a3[p];
	}	
}