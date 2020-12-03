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
 void backtrack1(int t)
{

	if (t > v)sum++;
	else
	{
		for (int i = 1; i <= c; i++)
		{
			color[t] = i;
			if (ok(t))
			{
				backtrack1(t + 1);
			}
			color[t] = 0;
		}
	}
}
void Graph_coloring2()
{

	int i, j;
	cin >> v >> e >> c;
	for ( i = 1; i <=v; i++)
	{
		for (j = 1; j <= v; j++)
		{

			graph[i][j] = 0;
		}
	}
	for (int k = 1; k <=e; k++)
	{
		cin >> i >> j;
		graph[i][j] = 1;
		graph[j][i] = 1;
	}
	for ( i = 0; i <=v; i++)
	{
		color[i] = 0;
	}
	backtrack1(1);
	cout << sum << endl;
}

