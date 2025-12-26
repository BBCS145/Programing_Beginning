#include<iostream>
#include<vector>
#include<queue>
using namespace std;

struct tree
{
	int i;
	tree* left;
	tree* right;
};

typedef tree* tnode;
typedef pair<int, int> PII;
int num = 0;
queue<tnode>abc;

void dfs(tnode head)
{
	if (head == NULL)
	{
		if (num < abc.size())
			num = abc.size();
		return;
	}
	abc.push(head->left);
	dfs(head->left);
	abc.pop();
	abc.push(head->right);
	dfs(head->right);
	abc.pop();
	return;
}

int main()
{
	int n;
	cin >> n;
	vector<PII>arr;
	queue<tnode>que;
	arr.push_back({ 0,0 });
	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		arr.push_back({ a,b });
	}
	tnode head = new tree;
	head->i = 1;
	head->left = NULL;
	head->right = NULL;
	que.push(head);
	while (que.size() != 0)
	{
		int p = arr[que.front()->i].first;
		int q = arr[que.front()->i].second;
		if (p != 0)
		{
			tnode newnode = new tree;
			que.front()->left = newnode;
			newnode->i = p;
			newnode->left = NULL;
			newnode->right = NULL;
			que.push(newnode);
		}
		if (q != 0)
		{
			tnode newnode = new tree;
			que.front()->right = newnode;
			newnode->i = q;
			newnode->left = NULL;
			newnode->right = NULL;
			que.push(newnode);
		}
		que.pop();
	}
	abc.push(head);
	dfs(head);
	cout << num - 1;
}