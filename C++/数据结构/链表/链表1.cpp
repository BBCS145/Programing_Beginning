#include<iostream>
#include<string>
#include<windows.h>
using namespace std;

struct list
{
	int num;
	list* next;
};

typedef list* node;

static int get_length(list* head)
{
	int num = 1;
	while (head->next != NULL)
	{
		num++;
		head = head->next;
	}
	return num;
}

static void get_data(list* head)
{
	cout << endl;
	while (1)
	{
		cout << head->num<<' ';
		if (head->next == NULL)
			break;
		else
			head = head->next;
	}
	cout << endl;
}

 static list* list_front(node head)
{
	node h_head = (node)malloc(sizeof(node));
	cin >> h_head->num;
	h_head->next = head;
	return h_head;
}

 static list* list_back(node head)
{
	node back = (node)malloc(sizeof(node));
	back->next = NULL;
	node temp = head;
	cin >> back->num;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = back;
	return head;
}

list* list_add(int n)
{
	list* head = (list*)malloc(sizeof(list));
	list* p = head;
	if (head == NULL)
		return NULL;
	cin >> p->num;
	for (int i = 1; i < n; i++)
	{
		list* temp = (list*)malloc(sizeof(list));
		cin >> temp->num;
		p->next = temp;
		p = p->next;
	}
	p->next = NULL;
	return head;
}

int main()
{
	node head = NULL;
	while (1)
	{
		int a;
		cout << "************" << endl;
		cout << "**选择操作**" << endl;
		cout << "***1.创建***" << endl;
		cout << "*2.获取长度*" << endl;
		cout << "***3.输出***" << endl;
		cout << "*4.尾部添加*" << endl;
		cout << "*5.首部添加*" << endl;
		cout << "***0.退出***" << endl;
		cin >> a;
		system("cls");
		if (a == 1)
		{
			int n;
			cout << "输入添加数量" << endl;
			cin >> n;
			head = list_add(n);
		}
		else if (a == 2)
		{
			cout << get_length(head) << endl;
		}
		else if (a == 3)
		{
			get_data(head);
		}
		else if (a == 4)
		{
			head = list_back(head);
		}
		else if (a == 5)
		{
			head = list_front(head);
		}
		else if (a == 0)
			break;
		else
		{
			cout << "输错了";
		}
		Sleep(500);
	}
	return 0;
}
