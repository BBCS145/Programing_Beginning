#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<stack>
#include<queue>
#include<bitset>
#include<algorithm>
#include<cctype>
#include<string>

using namespace std;


//vector

//int main()
//{
//	int n;
//	cin >> n;
//	vector<int> v(10, 3);
//	vector<int> s(n);
//	for (auto i = v.begin(); i != v.end(); i++)
//	{
//		cout << *i << endl;
//	}
//	v.push_back(20);
//	for (auto i = v.begin(); i != v.end(); i++)
//	{
//		cout << *i << endl;
//	}
//	cout << s.size();
//	return 0;
//}

//set

//int main()
//{
//	set<int> a;
//
//	int x, y, z, n;
//	cin >> x >> y >> z;
//	a.insert(x);
//	a.insert(y);
//	a.insert(z);
//
//	for (auto i = a.begin(); i != a.end(); i++)
//		cout << *i << endl;
//	cin >> n;
//	if (a.find(n) == a.end())
//	{
//		cout << (a.find(n) != a.end())<< endl;
//		cout << "没找到" << endl;
//	}
//	a.erase(x);
//	cout << (a.find(x) == a.end());
//	return 0;
//}

//map

//int main()
//{
//	int x, y;
//	int n;
//	cin >> n;
//	map<int, int> a;
//	a[1] = 2;
//	for (auto i = a.begin(); i != a.end(); i++)
//	{
//		cin >> x >> y;
//		a.insert({ x,y });
//	}
//	for (auto i = a.begin(); i != a.end(); i++)
//	{
//		cout << i->first << i->second;
//	}
//	return 0;
//}


//stack

//int main()
//{
//	stack<int> a;
//	a.push(1);
//	a.push(2);
//	cout << a.top() << endl;;
//	a.pop();
//	cout << a.top();
//	cout << endl << a.size();
//	return 0;
//}


//queue

//int main()
//{
//	queue <int> a;
//	a.push(1);
//	a.push(2);
//	cout << a.front() << " " << a.back();
//	cout << endl << a.size();
//	a.pop();
//	cout << endl << a.front();
//	return 0;
//}


//bitset

//int main()
//{
//	int a, b;
//	cin >> a;
//	bitset<8> m(a);
//	cout << m << endl;
//	bitset<10> n(5);
//	cout << n << endl;
//	cout << "a中存在1吗？" << m.any() << endl;
//	cout << "a中没有1吗？" << m.none() << endl;
//	cout << "a中1的个数:" << m.count() << endl;
//	cout << "取反结果" << m.flip() << endl;
//	cout << "哪位取反：";
//	cin >> b;
//	cout << m.flip(b) << endl;
//	cout << "哪个换1：";
//	cin >> b;
//	cout << m.set(b) << endl;
//	cout << "哪个换0：";
//	cin >> b;
//	cout << m.reset(b) << endl;
//	return 0;
//}


//sort

//bool cmp(int x, int y)
//{
//	return x > y;
//}

//int main()
//{
//	int n,m;
//	cin >> n;
//	vector<int> arr(n);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//	for (auto q = arr.begin(); q != arr.end(); q++)
//		cout << *q << " ";
//	cout << endl;
//	cout << "顺序（1）or逆序（0）:";
//	cin >> m;
//	if (m == 1)
//	{
//		sort(arr.begin(), arr.end());
//		for (auto q = arr.begin(); q != arr.end(); q++)
//			cout << *q << " ";
//		cout << endl;
//	}
//	else if (m == 0)
//	{
//		sort(arr.begin(), arr.end(), cmp);
//		for (auto q = arr.begin(); q != arr.end(); q++)
//			cout << *q << " ";
//	}
//}



//cctype

//int main()
//{
//	char a;
//	cin >> a;//只能处理一个字符
//	cout << a <<' '<< isalpha(a) << endl;
//	cout << a <<' '<< islower(a) << endl;
//	cout << a << isupper(a) << endl;
//	cout << a << isalnum(a) << endl;
//	cout << a << isspace(a) << endl;
//
//	char s1 = tolower(a);
//	cout << s1 << endl;
//
//	char s2 = toupper(a);
//	cout << s2 << endl;
//	return 0;
//}


//to_string数字转字符串，可用于高精度计算

//int main()
//{
//	string s = to_string(12345.1);
//	cout << s;
//	return 0;
//}


//stoi stod 字符串转int/double

//int main()
//{
//	int a = stoi("123");
//	double b = stod("123.5");
//	return 0;
//}