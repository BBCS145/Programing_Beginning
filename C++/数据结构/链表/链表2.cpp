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



//------------------------------------------------------------------------------
//function
//

//1
static list* list_add(int n)
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

//2
static int get_length(list* head)
{
	if (head == NULL)
		return 0;
	int num = 1;
	while (head->next != NULL)
	{
		num++;
		head = head->next;
	}
	return num;
}

//3
static void get_data(list* head)
{
	cout << endl;
	if (head == NULL)
		cout << "啥都木有"<<endl;
	else
	{
		while (1)
		{
			cout << head->num << ' ';
			if (head->next == NULL)
				break;
			else
				head = head->next;
		}
		cout << endl;
	}
}

//4
static list* list_back(node head)
{
	if (head == NULL)
	{
		cout << "不中" << endl;
		return NULL;
	}
	node back = (node)malloc(sizeof(node));
	back->next = NULL;
	node temp = head;
	cin >> back->num;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = back;
	return head;
}

//5
static list* list_front(node head)
{
	if (head == NULL)
	{
		cout << "不中" << endl;
		return NULL;
	}
	node h_head = (node)malloc(sizeof(node));
	cin >> h_head->num;
	h_head->next = head;
	return h_head;
}

//6
static list* list_back_delete(node head)
{
	if (head == NULL)
	{
		cout << "不中" << endl;
		return NULL;
	}
	node temp = (node)malloc(sizeof(node));
	temp = head;
	if (get_length(head) == 1)
	{
		cout << "你就一个元素怎么删除" << endl;
		Sleep(2000);
		return head;
	}
	else
	{
		while (temp->next->next != NULL)
			temp = temp->next;
		delete temp->next;
		temp->next = NULL;
		return head;
	}
}

//7
static list* list_front_delete(node head)
{
	if (head == NULL)
	{
		cout << "不中" << endl;
		return NULL;
	}
	node temp = (node)malloc(sizeof(node));
	if (get_length(head) == 1)
	{
		cout << "这怎么首部删除，干脆我给你删了吧" << endl;
		Sleep(2000);
		cout << "delete head;" << endl;
		delete head;
		return NULL;
	}
	else
	{
		temp = head;
		head = head->next;
		free(temp);
		return head;
	}
}


//------------------------------------------------------------------
//main:
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
		cout << "*6.尾部删除*" << endl;
		cout << "*7.首部删除*" << endl;
		cout << "*8.删除链表*" << endl;
		cout << "***0.退出***" << endl;
		cout << "************" << endl;
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
		else if (a == 6)
		{
			head = list_back_delete(head);
		}
		else if (a == 7)
		{
			head = list_front_delete(head);
		}
		else if (a == 0)
			break;
		else
		{
			cout << "输错了"<<endl;
		}
		Sleep(500);
	}
	return 0;
}
