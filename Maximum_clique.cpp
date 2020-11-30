// 最大团.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<string.h>
using namespace std;

const int N = 100;
int a[N][N];
bool x[N];
bool bestx[N];
int bestn;
int cn;
int n, m;

bool place(int t)
{

	bool ok = true;
	for (int i = 0; i < t; i++)
	{
		if (x[i] && a[t][i] == 0)
		{

			ok = false;
			break;
		}
	}
	return ok;
}

void backtrack(int t)
{
	if (t > n)
	{
		for (int i = 1; i <= n; i++) {

			bestx[i] = x[i];
		}
		bestn = cn;
		return;
	}
	if (place(t))
	{
		x[t] = 1;
		cn++;
		backtrack(t + 1);
		cn--;
	}
	if (cn + n - t > bestn)
	{
		x[t] = 0;
		backtrack(t + 1);
	}
}

//int main()
//{
//
//	int i, u, v;
//	cin >> n;
//	cin >> m;
//	memset(a, 0, sizeof(a));
//	for ( i = 0; i <=m; i++)
//	{
//		cin >> u >> v;
//		a[u][v] = a[v][u] = 1;
//		
//	}
//	bestn = 0;
//	cn = 0;
//	backtrack(1);
//	cout << bestn << endl;
//	for (int i = 1; i <=n ; i++)
//	{
//		if (bestx[i])cout << i << "";
//	}
//	return 0;
//}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
