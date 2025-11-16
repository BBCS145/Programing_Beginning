#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int>a(n);
    vector<int>b(n);
    int num;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        a[i] = num;
    }
    b = a;
    for (int i = 1; i < n; i++)
        b[i] += b[i - 1];
    int m;
    cin >> m;
    for (int j = 0; j < m; j++)
    {
        int x, y;
        cin >> x >> y;
        if (x == 1)
            cout << b[y - 1] << endl;
        else
            cout << b[y - 1] - b[x - 2] << endl;
    }
    return 0;
}
