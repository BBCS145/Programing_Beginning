#include<iostream>
#include<queue>
#include<iomanip>
using namespace std;

    class yuyuko
    {
    public:
        int height;
        int weight;

        void print() 
        { 
            cout << weight << endl; 
            return; 
        }


        void abc(int);
    }a;

void yuyuko::abc(int ww) { weight = ww; }

yuyuko var;
int main()
{
    int m, n;
    cin >> n >> m;
    a.height = n;
    a.weight = m;
    a.print();
    a.abc(1);
    a.print();
    return 0;
}