#include<iostream>
using namespace std;

struct tree
{
	int num;
	tree* left;
	tree* right;
	tree* parent;
};
typedef tree* tnode;

tnode tree_create()
{
	int n;
	tnode head = new tree;
	cout << "输入个数" << endl;
	cin >> n;
	int a;
	cin >> a;
	head->num = a;
	head->parent = NULL;
	head->left = NULL;
	head->right = NULL;
	tnode temp = head;
	for (int i = 1; i < n; i++)
	{
		cin >> a;
		while (1)
		{
			if (a > head->num)
			{
				if (temp->right == NULL)
				{
					tnode tem = new tree;
					tem->num = a;
					temp->right = tem;
					tem->left = NULL;
					tem->right = NULL;
					tem->parent = temp;
					break;
				}
				else
					temp = temp->right;
			}
			else
			{
				if (temp->left == NULL)
				{
					tnode tem = new tree;
					tem->num = a;
					temp->right = tem;
					tem->left = NULL;
					tem->right = NULL;
					tem->parent = temp;
					break;
				}
				else
					temp = temp->right;
			}
		}
	}
	return head;
}

//左旋
tnode left_reverse(tnode temp)
{
	if (temp->parent != NULL)
	{
		tnode tem = temp->parent;
		tem->left = temp->right;
		if (temp->right != NULL)
			temp->right->parent = tem;
		temp->right = tem;
		tem->parent = temp;
		temp->parent = NULL;
		return temp;
	}
}
//右旋
tnode right_reverse(tnode temp)
{
	if (temp->parent != NULL)
	{
		tnode tem = temp->parent;
		tem->right = temp->left;
		if (temp->left != NULL)
			temp->left->parent = tem;
		temp->left = tem;
		tem->parent = temp;
		temp->parent = NULL;
		return temp;
	}
}

//查找
int check(tnode temp, int x)
{
	int num = 0;
	while (1)
	{
		if (temp == NULL)
		{
			cout << "没"<<endl;
			cout << num << endl;
			return 0;
		}
		if (x > temp->num)
		{
			temp = temp->right;
			num++;
		}
		else if (x < temp->num)
		{
			temp = temp->left;
			num++;
		}
		else
		{
			cout << "有" << endl;
			cout << num << endl;
			return 0;
		}
	}
}

int main()
{
	tnode head = tree_create();
	//1,2,3,4,5,6
	check(head, 3);
	check(head, 7);
	head = right_reverse(head->right->right);
	check(head, 3);
	check(head, 7);
	return 0;
}