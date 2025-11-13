#include<iostream>
#include<stack>
using namespace std;

struct tree
{
    int num;
    tree* left;
    tree* right;
};
typedef tree* tnode;

tnode tree_create()
{
    tnode head = new tree;
    head->left = NULL;
    head->right = NULL;
    int n;
    cin >> n;
    int a;
    cin >> a;
    head->num = a;
    for (int j = 1; j < n; j++)
    {
        tnode temp = head;
        cin >> a;
        while (1)
        {
            if (a < temp->num)
            {
                if(temp->left!=NULL)
                    temp = temp->left;
                else
                {
                    tnode tem = new tree;
                    temp->left = tem;
                    tem->num = a;
                    tem->left = NULL;
                    tem->right = NULL;
                    break;
                }
            }
            else
            {
                if (temp->right != NULL)
                    temp = temp->right;
                else
                {
                    tnode tem = new tree;
                    temp->right = tem;
                    tem->num = a;
                    tem->left = NULL;
                    tem->right = NULL;
                    break;
                }
            }
        }
    }
    return head;
}

int main()
{
    tnode head = tree_create();
    //ÖÐÐò±éÀú
    stack<tnode>m;
    tnode temp = head;
    while (1)
    {
        if (temp != NULL)
        {
            m.push(temp);
            temp = temp->left;
        }
        else
        {
            temp = m.top();
            cout << m.top()->num << ' ';
            m.pop();
            temp = temp->right;
            if (m.size() == 0 && temp == NULL)
                break;
        }
    }
    return 0;
}