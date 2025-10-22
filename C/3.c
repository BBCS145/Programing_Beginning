#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	printf("这是一个同时猜俩数的程序，范围均在1~100\n");
	printf("分别输入两个数的值");
	while (a != 34 && b != 67)
	{
		scanf("%d\n", &a);
		scanf("%d\n", &b);
		if (a > 34 && b > 67)
		{
			printf("两个都太大了");
		}
		else if (a < 34 && b < 67)
		{
			printf("两个都太小了");
		}
		else 
		{
			printf("你的眼睛一大一小");
		}
		
	}
	printf("你赢了");
	return 0;
}
////'scanf': This function or variable may be unsafe. Consider using scanf_s instead. To disable deprecation, 
//// use _CRT_SECURE_NO_WARNINGS. See online help for details.
////	char name[30];
////	int age;
////	char sex[6];
////	char tele[12];
////};
////
////void print(struct stu *f)
////{
////	printf("%s %d %s %s", f->name, (*f).age, (*f).sex, (*f).tele);
////}
////int main()
////{
////	struct stu a = { "bbcs",18,"male","12345346434" };
////	printf("%s %d %s %s\n", a.name, a.age, a.sex, a.tele);
////	print(&a);
////	return 0;
////}
////int main()
////{
////	int a = 1;
////	int b = 1;
////	scanf("%d %d", &a, &b);
////	int c = a / b;
////	int d = a % b;
////	printf("%d %d", c, d);
////	return 0