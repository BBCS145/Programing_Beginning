#include<iostream>
#include<vector>
#include<string>
#include<windows.h>
using namespace std;

int main()
{
	int tarr[500] = { 0 };
	int n, a;
	cin >> n;
	for (int i=0;i<n;i++)
	{
		cin >> a;
		int level = 1;
		while (tarr[level] != 0)
		{
			if (a > tarr[level])
				level = level * 2 + 1;
			else
				level = level * 2;
		}
		tarr[level] = a;
	}
	return 0;
}
