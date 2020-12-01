// 最大团.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
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

void Maximum_clique_do()
{

	int i, u, v;
	cin >> n;
	cin >> m;
	memset(a, 0, sizeof(a));
	for ( i = 0; i <=m; i++)
	{
		cin >> u >> v;
		a[u][v] = a[v][u] = 1;
		
	}
	bestn = 0;
	cn = 0;
	backtrack(1);
	cout << bestn << endl;
	for (int i = 1; i <=n ; i++)
	{
		if (bestx[i])cout << i << "";
	}
}

