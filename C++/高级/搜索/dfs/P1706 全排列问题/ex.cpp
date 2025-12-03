#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;
int n;
vector<int>arr;
unordered_set<int>arr1;


void dfs(int position, int begin)
{
    if (position > n)
    {
        for (int i = 0; i < n; i++)
        {
            cout << "    " << arr[i];
        }
        cout << endl;
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        if (arr1.find(i) != arr1.end())
            continue;
        arr1.insert(i);
        arr.push_back(i);
        dfs(position + 1, i + 1);
        arr1.erase(i);
        arr.pop_back();
    }
}

int main()
{
    cin >> n;
    dfs(1, 1);
    return 0;
}

