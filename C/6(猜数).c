#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void game()
{
	int an = rand() % 100 + 1;
	system("cls");
	printf("������һ��1~100������\n");
	int input = 101;
	while(1)
	{
		printf("�²�\n");
		scanf("%d", &input);
		system("cls");
		if (input > an)
		{
			printf("�´���\n");
		}
		else if (input < an)
		{
			printf("��С��\n");
		}
		else
		{
			break;
		}

	}
}
int main()
{
	srand((unsigned int)time(NULL));
	printf("###########������Ϸ###########\n");
	printf("##############################\n");
	printf("###########>1.Start###########\n");
	printf("###########>0.Exit############\n");
	printf("##############################\n");
	int choice = 9;
	while (choice != 1 || choice != 0)
	{
		scanf("%d", &choice);
		if (0 == choice)
		{
			printf("�����˳�");
			Sleep(2000);
			exit(0);
		}
		else if (1 == choice)
		{
			game();
			break;
		}
		else
		{
			printf("��ѡ>_<\n");
			Sleep(1000);
		}
	}
	char ch1[] = "Congratulations!";
	char ch2[] = "################";
		int l = 0;
		int r = (sizeof(ch1) / sizeof(ch1[0])) - 2;
		while (l <= r)
		{
			ch2[l] = ch1[l];
			ch2[r] = ch1[r];
			printf("%s\n\a", ch2);
			Sleep(1000);
			system("cls");
			l+=1;
			r-=1;
		}
	return 0;
}