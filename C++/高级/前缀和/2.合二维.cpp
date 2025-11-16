#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int row, col;
    cin >> row >> col;
    //构建未知大小的二维数组
    vector<vector<int>>a(col, vector<int>(row));
    for (int i = 0; i < col;i++)
    {
        for (int j = 0; j < row; j++)
        {
            int m;
            cin >> m;
            a[i][j] = m;
        }
    }
    vector<vector<int>>b(col, vector<int>(row));
    b = a;
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            if (i == 0 && j == 0)
                continue;
            else
            {
                if (i == 0 && j != 0)
                    b[i][j] += b[i][j - 1];
                else if (j == 0 && i != 0)
                    b[i][j] += b[i - 1][j];
                else
                    b[i][j] += b[i - 1][j] + b[i][j - 1] - b[i - 1][j - 1];
            }
        }
    }
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << b[i][j] << ' ';
        }
        cout << endl;
    }
}
