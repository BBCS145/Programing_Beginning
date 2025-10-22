#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<malloc.h>
//函数
int sea(int x, int* pb, int y)
{
	int c = 0;
	int p = 0;
	for (c = 0; c < y; c++)
	{
		if (x == *(pb+c))
		{
			p++;//此处逐一查找效率较低，考虑使用二分法减少查找次数。但不确定监控输入数据是否为都为从小到大的排序，因此没敢用-_-
		}
	}
	if (p == 0 || p == 2)
	{
		return 0;
	}
	if (p ==1)
	{
		return 1;
	}
}
//二分法示例
/*int sea(int x, int* pb, int y, int z)
{
	int c = 0;
	int p = 0;
	int l = 0;
	int r = z;
	int mid = (l + r) / 2;
	for (l <= r)
	{
		if (x < mid)
		{
			r = mid - 1;
		}
		else if (x > mid)
		{
			l = mid + 1;
		}
		else if(x==mid)
		{
		l=mid;
		break;
		}
	}
	if (x == (pb+l) || x == (pb+r))
	{
		p++;
	}
	if (*(pb + l + 1) == x || *(pb + l - 1) == x)
	{
		p++;
	}
	if (p == 0 || p == 2)
	{
		return 0;
	}
	else if (p == 1)
	{
		return 1;
	}
}*/
int main()
{
	//数据输入
	int n;
	int m;
	scanf("%d %d", &n, &m);
	int* a = (int*)calloc(n, sizeof(int));
	int* b = (int*)calloc(m, sizeof(int));
	int q = 0;
	for (q = 0; q < n; q++)
	{
		scanf("%d", &a[q]);
	}
	q = 0;
	for (q = 0; q < m; q++)
	{
		scanf("%d", &b[q]);
	}
	//数据处理
	int p = 0;
	int i = 0;
	int* c = (int*)calloc(n, sizeof(int));
	for (i = 0; i < 5; i++)
	{
		int jud=sea(a[i], b, m);//调用函数以判断溜走的情况
		//int len=sizeof(a)/sizeof(a[0])-1
		//int jud=sea(a[i],b,m,len)
		if (jud == 0)
		{
			c[p] = a[i];//保存溜走学生的学号
			p++;//计算溜走学生的个数
		}
	}
	//数据输出
	printf("%d\n", p);//人数
	int f = 0;
	for (f = 0; f < p; f++)
	{
		printf("%d ", c[f]);//学号
	}
	return 0;
}
