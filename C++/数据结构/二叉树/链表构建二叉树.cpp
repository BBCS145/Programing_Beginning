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


int main()
{
	tnode head = (tnode)malloc(sizeof(tnode));
	if (head == NULL)
		return 1;
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
						return 1;
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
						return 1;
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
	return 0;
}