// 石头合并.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。


#include <iostream>
#include<math.h>
#include<algorithm>
using namespace std;

const int INF = 1 << 30;
#define N 305

int dp[N][N];
int sum[N];
extern int a[N];

int getMinval(int* a, int n)
{

	for (int i = 0; i < n; i++)
	{
		dp[i][i] = 0;
	}
	for (int v = 1; v < n; v++)
	{
		for (int i = 0; i < n - v; i++)
		{

			int j = i + v;
			dp[i][j] = INF;
			int temp = sum[j] - (i > 0 ? sum[i - 1] : 0);
			for (int k = i; k < j; k++)
			{
				dp[i][j] = min(dp[i][j], dp[i][k] + dp[k + 1][j] + temp);
			}
		}

	}
	return dp[0][n - 1];
}

void MergerStone()
{

	int n;
	while (cin >> n)
	{
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
	}
	sum[0] = a[0];
	for (int i = 1; i < n; i++)
	{
		sum[i] = sum[i - 1] + a[i];
	}
	getMinval(a, n);
}

