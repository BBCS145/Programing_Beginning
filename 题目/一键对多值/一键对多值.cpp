#include<iostream>
#include<map>
using namespace std;
int main()
{
    int n, m, a, b, l1, l2;
    int num = 0;
    int ret = 0;
    cin >> n >> m;
    cin >> l1 >> l2;
    multimap<int, int>tree;
    for (int i = 0; i < n; i++)
    {
        cin >> b >> a;
        tree.insert({ a,b });
    }
    for (auto i = tree.begin(); i != tree.end(); i++)
    {
        if (i->second <= l1 + l2)
        {
            num++;
            ret += i->first;
        }
        if (ret >= m)
            break;
    }
    if (ret == m)
        cout << num;
    else
        cout << num - 1;
    return 0;
}