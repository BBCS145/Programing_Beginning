#include<iostream>
#include<vector>
#include<string>
#include<windows.h>
using namespace std;

struct tree
{
	int num;
	tree* left;
	tree* right;
};
typedef tree* tnode;

//创建
tnode tree_create(tnode head)
{
	if (head == NULL)
		return NULL;
	head->left = NULL;
	head->right = NULL;
	int n, a;
	cin >> n;
	cin >> head->num;
	for (int i = 1; i < n; i++)
	{
		tnode temp = head;
		cin >> a;
		while (1)
		{
			if (a > temp->num)
			{
				if (temp->right == NULL)
				{
					tnode temmie = (tnode)malloc(sizeof(tnode));
					if (temmie == NULL)
						return NULL;
					temp->right = temmie;
					temmie->num = a;
					temmie->left = NULL;
					temmie->right = NULL;
					break;
				}
				else
					temp = temp->right;
			}
			else
			{
				if (temp->left == NULL)
				{
					tnode temmie = (tnode)malloc(sizeof(tnode));
					if (temmie == NULL)
						return NULL;
					temp->left = temmie;
					temmie->num = a;
					temmie->left = NULL;
					temmie->right = NULL;
					break;
				}
				else
					temp = temp->left;
			}
		}

	}
	return head;
}

//中序遍历(可起到排序功能)
void get_datam(tnode head)
{
	if (head != NULL)
	{
		get_datam(head->left);
		cout << head->num << ' ';
		get_datam(head->right);
	}
}

//前序排列
void get_dataf(tnode head)
{
	if (head != NULL)
	{
		cout << head->num << ' ';
		get_dataf(head->left);
		get_dataf(head->right);
	}
}

//后序遍历
void get_datab(tnode head)
{
	if (head != NULL)
	{
		get_datab(head->left);
		get_datab(head->right);
		cout << head->num << ' ';
	}
}

//查找
int tree_find(tnode head,int a)
{
	tnode temp = head;
	while (temp != NULL)
	{
		if (a < temp->num)
			temp = temp->left;
		else if (a > temp->num)
			temp = temp->right;
		else
			return 1;
	}
	return 0;
}

//插入
tnode tree_insert(tnode head)
{
	int a;
	cout << "插哪个？" << endl;
	cin >> a;
	tnode temp = head;
	if (tree_find(head, a) == 0)
	{
		while (1)
		{
			if (a < temp->num)
			{
				if (temp->left == NULL)
				{
					tnode temmie = (tnode)malloc(sizeof(tnode));
					temmie->num = a;
					temp->left = temmie;
					temmie->left = NULL;
					temmie->right = NULL;
					break;
				}
				else
					temp = temp->left;
			}
			else
			{
				if (temp->right == NULL)
				{
					tnode temmie = (tnode)malloc(sizeof(tnode));
					temmie->num = a;
					temp->right = temmie;
					temmie->left = NULL;
					temmie->right = NULL;
					break;
				}
				else
					temp = temp->right;
			}
		}
		return head;
	}
	else
	{
		cout << "已经有了" << endl;
		return head;
	}
}

int main()
{
	tnode head = (tnode)malloc(sizeof(tnode));
	head = tree_create(head);
	get_datam(head);
	cout << endl;
	get_dataf(head);
	cout << endl;
	get_datab(head);
	cout << endl;
	int a;
	cout << "查哪个？" << endl;
	cin >> a;
	if (tree_find(head,a) == 1)
		cout << "找到了" << endl;
	else
		cout << "没找到" << endl;
	head = tree_insert(head);
	get_datam(head);
	return 0;
}
