#include<stdio.h>
int main()
{
	int line = 0;
	while (line < 100)
	{
		line = line + 1;
		printf("%d\n", line);
	}
	if (line >= 100)
	{
		printf("����");
	}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
int add(x, y)
{
	return(x + y);
}
int gh(x,y)
{
	return(x * y);
}
#include<stdio.h>
int main()
{
	int ch = 0;
	printf("1/0\n");
	scanf("%d\n", &ch);
	if (ch == 1)
	{
		int a = 0;
		int b = 0;
		scanf("%d", &a);
		scanf("%d", &b);
		int c = add(a, b);
		printf("%d\n", c);
	}
	else
	{
	/*	int a = 0;
		int b = 0;
		scanf("%d", &a);
		scanf("%d", &b);
		int k = gh(b,a);
		printf("%d\n", k);

	}
	return 0;
}*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int tg[11] = { '��','��','��','��','��','��','��','��','��','��','\0'};
//	int dz[13] = { '��','��','��','î','��','��','��','δ','��','��','��','��','\0'};
//	printf("������ݣ�\n");
//	int y = 0;
//	scanf_s("%d", &y);
//	int t = 0;
//	int d = 0;
//	t=((y-1984)%10);
//	d=((y-1984)%12);
//	printf("%d %d\n", t, d);
//	char m = tg[1];
//	printf("%c\n", m);
//	/*printf("%c", tg[t]);
//	printf("%c", dz[d]);*/
//	return 0;
//}
