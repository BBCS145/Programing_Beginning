#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include<stdlib.h>
#include<time.h>
#include<malloc.h>
#include<string.h>
//判素数

//void jud(int x)
//{
//	int i = 2;
//	int c = 0;
//	if (2 == x)
//	{
//		printf("为素数");
//	
//	}
//	for (i = 2; i <= (x - 1); i++)
//	{
//		c = x % i;
//		if (0 == c)
//		{
//			printf("非素数");
//			break;
//		}
//		if (i = (x - 1))
//		{
//			printf("为素数");
//		}
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	jud(a);
//	return 0;
//}
//'scanf': This function or variable may be unsafe. Consider using scanf_s instead. To disable
// deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.

// 判闰年

//void jud2(int x)
//{
//	if (x % 4 == 0 && x % 100 != 0)
//	{
//		printf("是闰年\n");
//	}
//	else
//	{
//		printf("是平年\n");
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	jud2(a);
//	return 0;
//}

//二分法

//void se(int x[], int y,int z)
//{
//	int l = 0;
//	int r = z - 1;
//	while (l<=r)
//	{
//		int mid = (l + r) / 2;
//		if (x[mid] < y)
//		{
//			l = mid+1;
//		}
//		else if(x[mid] > y)
//		{
//			r = mid-1;
//		}
//		else
//		{
//			printf("找到了，脚码为%d", mid);
//			break;
//		}
//	}
//	if (l > r)
//	{
//		printf("找不到");
//	}
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	scanf("%d", &key);
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	se(arr1, key,sz);
//	return 0;
//}
//数组传参传的是一个地址，即指针变量，不具有原来数组的长度性质，不能在函数内求长度。但该指针变量仍具有数组访问功能

//#include<stdbool.h>
//int main()
//{
//	printf("%zu", sizeof(bool));
//
//	return 0;
//}

//判定函数运行的次数

//void test(int* pnum)
//{
//	int s = *pnum;
//	*pnum = s + 1;
//}
//int main()
//{
//	int i = 1;
//	int num = 0;
//	for (i = 1; i < 5; i++)
//	{
//		test(&num);
//	}
//	printf("%d", num);
//	return 0;
//}
//涉及到了形参与实参的传递与地址的运用

//接收1234并打印1 2 3 4

//void print(x)
//{
//	if (x > 9)
//	{
//		print(x / 10);
//	}
//	printf("%d ", x % 10);
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}

//求字符串长度

//(1)
//#include <string.h>
//int main()
//{
//	char st[] = "abc";
//	int b = strlen(st);
//	printf("%d", b);
//	return 0;
//}

//(2)
//int strm(char* str)
//{
//	int i = 0;
//	while(*str != '\0')
//	{
//		i++;
//		str++;
//	}
//	printf("%d\n", i);
//	return 0;
//}
//int main()
//{
//	char st[] = "abc";
//	int c =strm(st);
//	printf("%d",c);
//	return 0;
//}

//(3)
//int strm(char* str)
//{
//	if (*str != '\0')
//	{
//		return(1 + strm(str + 1));
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char st[] = "abc";
//	int c=strm(st);
//	printf("%d", c);
//	return 0;
//}


//求阶乘

//int fac(int x)
//{
//	if (x <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return(x * fac(x - 1));
//	}
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int an = fac(num);
//	printf("%d\n", an);
//	return 0;
//}

//斐波那契数列

//1 1 2 3 5 8 13
//int fei(int x)
//{
//	if (x <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return(fei(x - 1) + fei(x - 2));
//	}
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int ret = fei(num);
//	printf("%d\n", ret);
//	return 0;
//}

//最大公约数

//int jud(int x, int y)
//{
//	int i = x;
//	int c = 0;
//	for (i = x; i>=0; i--)
//	{
//		if(x%i==0&&y%i==0)
//		{
//			c = i;
//		}
//	}
//	return c;
//}
//int sea(int x, int y)
//{
//	if (x > y)
//	{
//		int m=jud(y, x);
//		return m;
//	}
//	else if (x < y)
//	{
//		int n=jud(x, y);
//		return n;
//	}
//	else
//	{
//		return x;
//	}
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a);
//	scanf("%d", &b);
//	int an = sea(a, b);
//	printf("最大公约数为%d", an);
//	return 0;
//}
//可考虑用辗转相除法 

//二维数组的探索

//int main()
//{
//	int arr[3][4] = { {1,2,3,4},{9,9,6,1},{1,1,4,5} };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i <= 2; i++)
//	{
//		for (j = 0; j <= 3; j++)
//		{
//			printf("%d	", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { 0 };
//	int a = sizeof(arr) / sizeof(arr[0]);
//	int b = sizeof(arr[0]) / sizeof(arr[0][0]);
//	printf("arr[%d][%d}", a, b);
//	return 0;
//}

//int juesub(int x, int y)
//{
//	int z = x - y;
//	if (z >+ 0)
//	{
//		return z;
//	}
//	else if (z < 0)
//	{
//		z = -z;
//		return z;
//	}
//}
//int jud(int x, int y, int m, int n)
//{
//	if (juesub(x, m) == 1 || juesub(x, n) || juesub(y, m) || juesub(y, n))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//void print(int* parr[])
//{
//	int u = 0;
//	int t = 0;
//	for (u = 0; u <= 9; u++)
//	{
//		for (t = 0; t <= 9; t++)
//		{
//			printf("%d  ", parr[u][t]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int map[10][10] = { 0 };
//	srand((unsigned int)time(NULL));
//	printf("游戏初始化中");
//	int a = rand() % 10;
//	Sleep(2000);
//	int b = rand() % 10;
//	system("cls");
//	int i = 0;
//	int j = 0;
//	int g = 4;
//	while (g >= 0)
//	{
//		scanf("%d\n", &i);
//		scanf("%d\n", &j);
//		g--;
//		if (i == a && j == b)
//		{
//			map[i][j] = '1';
//			print(map);
//			printf("\a");
//			Sleep(3000);
//			break;
//		}
//		else if (jud(i, j, a, b))
//		{
//			map[a][b] = '1';
//			print(map);
//			printf("\a");
//			Sleep(3000);
//			break;
//		}
//		else
//		{
//			int o = -1;
//			int k = -1;
//			for (o = -1; o <= 1; o++)
//			{
//				for (k = -1; k <= 1; k++)
//				{
//					map[o + i][k + j] = '2';
//				}
//			}
//			print(map);
//			printf("没找到\n");
//			Sleep(1000);
//			printf("还剩%d个炸弹\n", g);
//			Sleep(1000);
//			system("cls");
//		}
//	}
//	system("cls");
//	if (g == -1)
//	{
//		printf("You Fail!");
//	}
//	else
//	{
//		printf("Congratulations!");
//	}
//	return 0;
//}

//game 1

//int juesub(int x, int y)
//{
//	int z = x - y;
//	if (z > +0)
//	{
//		return z;
//	}
//	else if (z < 0)
//	{
//		z = -z;
//		return z;
//	}
//}
//int jud(int x, int y, int m, int n)
//{
//	if (juesub(x, m) == 1&&juesub(y,n)==1)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int map[10][10] = { 0 };
//	srand((unsigned int)time(NULL));
//	printf("游戏初始化中");
//	int a = rand() % 10;
//	Sleep(2000);
//	int b = rand() % 10;
//	system("cls");
//	int i = 0;
//	int j = 0;
//	int g = 4;
//	while (g > 0)
//	{
//		scanf("%d", &i);
//		scanf("%d", &j);
//		if (i == a && j == b)
//		{
//			map[i][j] = '1';
//			int u = 0;
//			int t = 0;
//			for (u = 0; u <= 9; u++)
//			{
//				for (t = 0; t <= 9; t++)
//				{
//					printf("%d  ", map[u][t]);
//				}
//				printf("\n");
//			}
//			printf("\a");
//			Sleep(3000);
//			break;
//		}
//		else if (jud(i, j, a, b))
//		{
//			map[a][b] = 1;
//			int u = 0;
//			int t = 0;
//			for (u = 0; u <= 9; u++)
//			{
//				for (t = 0; t <= 9; t++)
//				{
//					printf("%d  ", map[u][t]);
//				}
//				printf("\n");
//			}
//			printf("\a");
//			Sleep(3000);
//			break;
//		}
//		else
//		{
//			int o = -1;
//			int k = -1;
//			for (o = -1; o <= 1; o++)
//			{
//				for (k = -1; k <= 1; k++)
//				{
//					if (o + i < 0 || o + i>9 || k + j < 0 || k + j>9)
//					{ }
//					else
//					{
//						map[o + i][k + j] = 2;
//					}
//				}
//			}
//			int u = 0;
//			int t = 0;
//			for (u = 0; u <= 9; u++)
//			{
//				for (t = 0; t <= 9; t++)
//				{
//					printf("%d  ", map[u][t]);
//				}
//				printf("\n");
//			}
//			g--;
//			printf("没找到\n");
//			Sleep(1000);
//			printf("还剩%d个炸弹\n", g);
//			Sleep(1000);
//		}
//	}
//	system("cls");
//	if (g == 0)
//	{
//		printf("You Fail!");
//	}
//	else
//	{
//		printf("Congratulations!");
//	}
//	return 0;
//}

//字符串倒序

//void swap(char* str)
//{
//	char temp = *str;
//	int len = strlen(str);
//	*str=*(str+len-1);
//	*(str + len - 1) = '\0';
//	if(strlen(str)>=2)
//	swap(str + 1);
//	*(str + len - 1) = temp;
//}
//
//int main()
//{
//	char str[20] = { "abcd"};
//	scanf("%s", &str);
//	swap(str);
//	return 0;
//}


//数字各位数相加

//int sum(int num,int len)
//{
//	int a = pow(10, (len - 1));
//	if (len == 1)
//	{
//		return num;
//	}
//	return num / a + (sum(num % a, len-1));
//}
//int sum(int num)
//{
//	int a = num/10;
//	return(sum(num % 10) + a);
//}
//int main()
//{
//	int num,len;
//	printf("输入数字及位数");
//	scanf("%d %d", &num,&len);
//	int c = sum(num,len);
//	printf("%d", c);
//	return 0;
//}


//int main()
//{
//	/*int a,b;
//	scanf("%d", &a);
//	scanf("%d", &b);
//	print_2(a);
//	print_2(b);
//	int c = a ^ b;
//	print_2(c);*/
//	int x = 2;
//	int y = 45;
//	int z = (x = x + y, y = x + y, y);
//	printf("%d", z);
//	return 0;
//}

//int stair(int x,int c)
//{
//	if (x == 1)
//	{
//		return 1;
//	}
//	if (x == 2)
//	{
//		return 3;
//	}
//	if (x > 2)
//	{
//		c = stair(x - 2,c) + stair(x - 1,c);
//	}
//	return c;
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int c = 0;
//	int a=stair(n,c);
//	printf("%d", a);
//	return 0;
//}


//int jud(int x, double i,double sum)
//{
//    sum = sum + 1 / i;
//   if (sum <= x)
//   {
//       i++;
//       jud(x, i,sum);
//   }
//   else
//   {
//      return (int)i;
//   }
//}
//
//
//int main()
//{
//    int a;
//    double i = 1.0;
//    double sum = 0;
//    scanf("%d", &a);
//    int ret = jud(a, i,sum);
//    printf("%d", ret);
//    return 0;
//}


//int main()
//{
//    int l, m;
//    scanf("%d %d", &l, &m);
//    int* arr = (int*)calloc(l, sizeof(int));
//    int i = 0;
//    int ret = 0;
//    for (i = 0; i < l; i++)
//    {
//        arr[i] = 1;
//    }
//    i = 0;
//    for (i = 0; i < m; i++)
//    {
//        int a, b;
//        scanf("%d %d", &a, &b);
//        int j = a;
//        for (j = a; j<=b; j++ )
//        {
//            arr[j] = 0;
//        }
//    }
//    i = 0;
//    for (i = 0; i < l; i++)
//    {
//        if (arr[i] == 0)
//        {
//            ret++;
//        }
//    }
//    printf("%d", ret);
//}



//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//    int n;
//    int ret = 0;
//    scanf("%d", &n);
//    int arr[1000][3];
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        j = 0;
//        for (j = 0; j < 3; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    i = 0;
//    for (i = 0; i < n - 1; i++)
//    {
//        j = i + 1;
//        for (j = i + 1; j < n; j++)
//        {
//            if (abs(arr[i][0] - arr[j][0]) <= 5 && abs(arr[i][1] - arr[j][1]) <= 5 && abs(arr[i][2] - arr[j][2]) <= 5)
//            {
//                ret++;
//            }
//        }
//    }
//    printf("%d", ret);
//    return 0;
//}

//指针

//int test1(int x, int y)
//{
//	return x + y;
//}
//
//
//int test2(int x, int y)
//{
//	return x - y;
//}
//
//
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int arr2[10] = { 0,9,8,7,6,5,4,3,2,1 };
//	int* p1 = arr1;
//	int* arr3[2] = { arr1,arr2 };
//	int i = 0;
//	for (i = 0; i < 2; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 10; j++)
//		{
//			printf("%d ", *(arr3[i] + j));
//		}
//		printf("\n");
//	}
//	int (*p3)(int, int) = test1;
//	int (*p4)(int, int) = test2;
//	printf("%d", p3(4, 5));
//	return 0;
//}


