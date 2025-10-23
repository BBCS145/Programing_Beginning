#include<iostream>
#include<cmath>
#include<set>
using namespace std;
int jud(int x)
{
    if (x == 2)
        return 1;
    if (x == 1)
        return 0;
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int n, m, num, ret, g,q;
    int a[6] = { 0 };
    set<int>last;
    cin >> n >> m;
    for (int i = n; i <= m; i++)
    {
        q = i;
        if (jud(i) == 1)
        {
            num = 0;
            while (i != 0)
            {
                a[num] = i % 10;
                i = i / 10;
                num++;
            }
            ret = 0;
            for (int j = 0; j <=num-1; j++)
            {
                ret += pow(10, (num-1-j)) * a[j];
            }
            if (jud(ret) == 1)
            {
                last.insert(q);
            }
        }
        i = q;
    }
    g = 0;
    int len = last.size();
    if (len == 0)
        cout << "No";
    else
    {
        for (auto m = last.begin(); m != last.end(); m++)
        {
            g++;
            cout << *m;
            if (g < len)
                cout << ',';
        }
    }
    return 0;
}
