#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<malloc.h>
//����
int sea(int x, int* pb, int y)
{
	int c = 0;
	int p = 0;
	for (c = 0; c < y; c++)
	{
		if (x == *(pb+c))
		{
			p++;//�˴���һ����Ч�ʽϵͣ�����ʹ�ö��ַ����ٲ��Ҵ���������ȷ��������������Ƿ�Ϊ��Ϊ��С������������û����-_-
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
//���ַ�ʾ��
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
	//��������
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
	//���ݴ���
	int p = 0;
	int i = 0;
	int* c = (int*)calloc(n, sizeof(int));
	for (i = 0; i < 5; i++)
	{
		int jud=sea(a[i], b, m);//���ú������ж����ߵ����
		//int len=sizeof(a)/sizeof(a[0])-1
		//int jud=sea(a[i],b,m,len)
		if (jud == 0)
		{
			c[p] = a[i];//��������ѧ����ѧ��
			p++;//��������ѧ���ĸ���
		}
	}
	//�������
	printf("%d\n", p);//����
	int f = 0;
	for (f = 0; f < p; f++)
	{
		printf("%d ", c[f]);//ѧ��
	}
	return 0;
}
