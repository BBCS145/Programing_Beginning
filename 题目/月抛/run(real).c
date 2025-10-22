#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<malloc.h>
#include<math.h>

#define MAX 21
#define eps 1e-8

void swapdouble(long double* px, long double* py)
{
	long double mid = *px;
	*px = *py;
	*py = mid;
}

void swapint(long* px, long* py)
{
	long mid = *px;
	*px = *py;
	*py = mid;
}


int main()
{
	long people;
	long portal = 0;
	scanf("%ld", &people);
	char** name = (char**)malloc(people * sizeof(char*));
	long* namespace = (long*)calloc(people, sizeof(long));
	long double* total = (long double*)calloc(people, sizeof(long double));
	long* day1 = (long*)calloc(people, sizeof(long));
	long i = 0;
	long c = 0;
	for (i = 0; i < people; i++)
	{
		day1[c] = 0;
		total[c] = 0;
		long j = 0;
		long double a;
		name[c] = (char*)calloc(MAX, sizeof(char));
		scanf("%s", name[c]);
		scanf("%ld", &portal);
		for (j = 0; j < portal; j++)
		{
			scanf("%llf", &a);
			total[c] += a;
			if (a > 3.00 || fabs(a - 3.00) < eps)
			{
				day1[c]++;
			}
		}
		if (total[c] < 150.00 && day1[c] < 40)
		{
			c--;
		}
		else
		{
			namespace[c] = c;
		}
		c++;
	}
	long m = 0;
	long n = 1;
	for (m = 0; m < c - 1; m++)
	{
		n = m + 1;
		for (n = m + 1; n < c; n++)
		{
			if (total[n] > total[m])
			{
				swapdouble(&total[n], &total[m]);
				swapint(&day1[n], &day1[m]);
				swapint(&namespace[n], &namespace[m]);
			}
		}
	}
	for (m = 0; m < c - 1; m++)
	{
		n = m + 1;
		for (n = m + 1; n < c; n++)
		{
			if (fabs(total[n] - total[m]) < eps)
			{
				if (day1[n] > day1[m])
				{
					swapint(&day1[n], &day1[m]);
					swapint(&namespace[n], &namespace[m]);
				}
			}
		}
	}
	for (m = 0; m < c - 1; m++)
	{
		n = m + 1;
		for (n = m + 1; n < c; n++)
		{
			if (fabs(total[n] - total[m]) < eps && day1[n] == day1[m])
			{
				if (namespace[n] < namespace[m])
				{
					swapint(&namespace[n], &namespace[m]);
				}
			}
		}
	}
	printf("%d\n", c);
	long last = 0;
	for (last = 0; last < c; last++)
	{
		printf("%s\n", name[namespace[last]]);
	}
	return 0;
}


