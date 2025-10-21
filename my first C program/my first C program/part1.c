#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num1 = 0;
	int num2 = 0;
	printf("输入第一个数\n");
	scanf("%d", &num1);
	printf("输入第二个数\n");
	scanf("%d", &num2);
	int sum = num1 + num2;
	printf("sum=%d", sum);
return 0;
}
//'scanf': This function or variable may be unsafe. Consider using scanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
