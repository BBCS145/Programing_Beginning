#include<iostream>

using namespace std;

int prime[1001] = { 0 };
int visit[1001] = { 0 };
int num = 0;

//void isprime1(int y)
//{
//	for (int i = 2; i <= y; i++)
//	{
//		if (!visit[i])
//			prime[++num] = i;
//		int j = 1;
//		while (j * i <= y)
//		{
//			visit[j * i] = 1;
//			j++;
//		}
//	}
//}

void isprime2(int y)
{
	for (int i = 2; i <= y; i++)
	{
		if (!visit[i])
			prime[++num] = i;
		for (int j = 1; j <= num && i * prime[j] <= y; j++)
		{
			visit[i * prime[j]] = 1;
			if (i % prime[j] == 0)
				break;
		}
	}
}

int main()
{
	int b;
	cin >> b;
	isprime2(b);
	for (int i = 1; i <= num; i++)
		cout << prime[i] << ' ';
}