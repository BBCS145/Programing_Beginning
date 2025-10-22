#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
int sort(const void * a,const void * b)
{
	return(*(int*)a - *(int*)b);
}
int sea(int x, int* p, int* mid, int i)
{
	int ret = 0;
	while (x > *(p + *mid))
	{
		(*(mid))++;
	}
	while (x == *(p + *mid))
	{
		ret++;
		(*(mid))++;
	}
	if (ret % 2 == 0)
	{
		return 0;
	}
	else
		return 1;
}



int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	int* arr1 = (int*)calloc(n, sizeof(int));
	int* arr2 = (int*)calloc(m, sizeof(int));
	int* arr3 = (int*)calloc(n, sizeof(int));
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr1[i]);
	}
	qsort(arr1, n, sizeof(int), sort);
	i = 0;
	for (i = 0; i < m; i++)
	{
		scanf("%d", &arr2[i]);
	}
	qsort(arr2, m, sizeof(int), sort);
	int mid = 0;
	int* pmid = &mid;
	i = 0;
	int num = 0;
	for (i = 0; i < n; i++)
	{
		int ret = sea(arr1[i], arr2, pmid, m);
		if (ret == 0)
		{
			arr3[num] = arr1[i];
			num++;
		}
	}
	printf("%d\n", num);
	i = 0;
	for (i = 0; i < num; i++)
	{
		printf("%d ", arr3[i]);
	}
	return 0;
}