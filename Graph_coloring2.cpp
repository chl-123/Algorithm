// 图的着色.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include<iostream>

using namespace std;
#define N 100
int v, e, c, graph[N][N], color[N];
int sum;
bool ok(int k)
{

	for (int i = 0; i < v; i++)
	{
		if (graph[k][i] && (color[i] == color[k]))
		{
			return false;
		}
	}
	return true;
}
void backtrack(int t)
{

	if (t > v)sum++;
	else
	{
		for (int i = 1; i <= c; i++)
		{
			color[t] = i;
			if (ok(t))
			{
				backtrack(t + 1);
			}
			color[t] = 0;
		}
	}
}
//int main()
//{
//
//	int i, j;
//	cin >> v >> e >> c;
//	for ( i = 1; i <=v; i++)
//	{
//		for (j = 1; j <= v; j++)
//		{
//
//			graph[i][j] = 0;
//		}
//	}
//	for (int k = 1; k <=e; k++)
//	{
//		cin >> i >> j;
//		graph[i][j] = 1;
//		graph[j][i] = 1;
//	}
//	for ( i = 0; i <=v; i++)
//	{
//		color[i] = 0;
//	}
//	backtrack(1);
//	cout << sum << endl;
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
