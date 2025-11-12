#include<iostream>
using namespace std;

struct list
{
    int num;
    list* back;
    list* front;
};
typedef list* node;

int main()
{
    int n, m;
    cin >> n >> m;
    node head = new list;
    head->back = NULL;
    head->front = NULL;
    node temp = head;
    for (int i = 1; i <= n; i++)
    {
        temp->num = i;
        if (i == n)
        {
            temp->back = head;
            head->front = temp;
        }
        else
        {
            node tem = new list;
            temp->back = tem;
            tem->front = temp;
            temp = tem;
        }
    }
    while (1)
    {
        for (int i = 1; i < m; i++)
            head = head->back;
        cout << head->num << ' ';
        head->front->back = head->back;
        head->back->front = head->front;
        head = head->back;
        n--;
        if (n == 1)
        {
            cout << head->num;
            break;
        }
    }
    return 0;
}