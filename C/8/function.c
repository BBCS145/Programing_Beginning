#include<stdio.h>

//转二进制
int print_2(int x)
{
	int a = 0;
	int b = 1;
	int i = 31;
	int arr[32] = { 0 };
	if (x < 0)
	{
		x = -x;
		arr[0] = 1;
		a++;
	}
	while(i >= a)
	{
		int c = x & b;
		if (c == b)
		{
			arr[i] = 1;
		}
		b = b << 1;
		i--;
	}
	i = 0;
	for (i = 0; i < 32; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
	return 0;
}