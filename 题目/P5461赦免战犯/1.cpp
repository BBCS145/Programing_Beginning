#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int arr[1025][1025];

void op(int posx,int posy,int x,int y)
{
	if (posx == x && posy == y)
		return;
	for (int i = posx; i <= (posx+x-1)/2; i++)
	{
		for (int j = posy; j <= (posy + y-1) / 2; j++)
		{
			arr[i][j] = 1;
		}
	}
	op(((posx + x + 1) / 2), ((posy + y + 1) / 2), x, y);
	op(posx, ((posy + y + 1) / 2), ((posx + x - 1) / 2), y);
	op(((posx + x + 1) / 2), posy, x, ((posy + y - 1) / 2));
}


int main()
{
	int n;
	cin >> n;
	int m = pow(2, n);
	op(1,1,m,m);
	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (arr[i][j] == 1)
				arr[i][j] = 0;
			else
				arr[i][j] = 1;
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}
	return 0;
}