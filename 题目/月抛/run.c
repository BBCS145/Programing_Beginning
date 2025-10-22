#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<malloc.h>

#define MAX 20
swapdouble(double* px, double* py)
{
	int mid = *px;
	*px = *py;
	*py = mid;
}

swapint(int* px, int* py)
{
	int mid = *px;
	*px = *py;
	*py = mid;
}

//swapchar(char* px, char* py)
//{
//	char mid =*px;
//	*px =*py;
//	*py = mid;
//}

int main()
{
	int people;
	int portal = 0;
	scanf("%d", &people);
	char** name = (char**)malloc(people * sizeof(char*));
	int* namespace = (int *)calloc(people, sizeof(int));
	double *total = (double *)calloc(people, sizeof(double));
	int *day1 = (int *)calloc(portal, sizeof(int));
	int i = 0;
	int c = 0;
	for (i = 0; i < people; i++)
	{
		namespace[i] = i;
		int j = 0;
		double a;
		name[i] = (char*)calloc(MAX , sizeof(char));
		scanf("%s",name[i]);
		scanf("%d", &portal);
		for (j = 0; j < portal; j++)
		{
			scanf("%lf", &a);
			total[c] += a;
			if (a >= 3.00)
			{
				day1[c]++;
			}
		}
		if (total[c] < 150.00 && day1[c] < 40)
		{
			c--;
		}
		c++;
	}
	c--;
	int m = 0;
	int n = 1;
	int mid = 0;
	for (m = 0; m <c; m++)
	{
		for (n = 1; n <c; n++)
		{
			if (total[m] > total[n])
			{
				continue;
			}
			else if (total[m] < total[n])
			{
				swapdouble(&total[m], &total[n]);
				swapint(&namespace[m], &namespace[n]);
			}
			else
			{
				if (day1[m] > day1[n])
				{
					continue;
				}
				else if (day1[m] < day1[n])
				{
					swapdouble(&total[m], &total[n]);
					swapint(&namespace[m], &namespace[n]);
				}
				else
				{
					continue;
				}
			}
		}
	}
	printf("%d\n", c);
	int last = 0;
	for (last = 0; last < c; last++)
	{
		printf("%s\n",name[namespace[last]]);
	}
}