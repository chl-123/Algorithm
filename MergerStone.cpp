// 石头合并.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

//#include <iostream>
//#include<math.h>
//#include<algorithm>
////using namespace std;
//
//const int INF = 1 << 30;
//#define N 305
//
//int dp[N][N];
//int sum[N];
//int a[N];

//int getMinval(int* a, int n)
//{
//
//	for (int i = 0; i < n; i++)
//	{
//		dp[i][i] = 0;
//	}
//	for (int v = 1; v < n; v++)
//	{
//		for (int i = 0; i < n - v; i++)
//		{
//
//			int j = i + v;
//			dp[i][j] = INF;
//			int temp = sum[j] - (i > 0 ? sum[i - 1] : 0);
//			for (int k = i; k < j; k++)
//			{
//				dp[i][j] = min(dp[i][j], dp[i][k] + dp[k + 1][j] + temp);
//			}
//		}
//
//	}
//	return dp[0][n - 1];
//}

//int main()
//{
//
//	int n;
//	while (cin >> n)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			cin >> a[i];
//		}
//	}
//	sum[0] = a[0];
//	for (int i = 1; i < n; i++)
//	{
//		sum[i] = sum[i - 1] + a[i];
//	}
//	getMinval(a, n);
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
