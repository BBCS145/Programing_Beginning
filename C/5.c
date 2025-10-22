#define _CRT_SECURE_NO_WARNINGS

//int main()
//{
//	int day = 1;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("a");
//		break;
//	case 2:
//		printf("b");
//		break;
//	case 3:
//		printf("c");
//	
//
//	}
//	return 0;
//}
//'scanf': This function or variable may be unsafe. Consider using scanf_s instead. To disable deprecation, 
// use _CRT_SECURE_NO_WARNINGS. See online help for details.
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 10; i+=2)
//	{
//		printf("%d ", i);
//		printf("hehe\n");
//	}
//	int j = 0;
//	do
//	{
//		printf("%d ",j);
//		printf("hehe\n");
//		j += 2;
//	} while (j <= 10);
//	return 0;
//}
#include <stdio.h>

int main()
{
    char a = getchar();
    char b = getchar();
    char c = getchar();
    putchar(a + 32);
    printf("\n");
    putchar(c + 32);
    return 0;
}