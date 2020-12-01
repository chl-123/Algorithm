// 01_背包.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

//#include<iostream>
////using namespace std;
//#define  V 1500
//unsigned int f[10][V];//全局变量，自动初始化为0
//unsigned int weight[10];
//unsigned int value[10];
//#define  max(x,y)    (x)>(y)?(x):(y)
//int main()
//{
//
//	int n, m;
//	cin >> n;//物品个数
//	cin >> m;//背包容量
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> weight[i] >> value[i];
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		cout<< weight[i] << "  "<<value[i];
//	}
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= m; j++)
//		{
//			if (weight[i] <= j)
//			{
//				f[i][j] = max(f[i - 1][j], f[i - 1][j - weight[i]] + value[i]);
//			}
//			else
//				f[i][j] = f[i - 1][j];
//		}
//
//	cout << f[n][m] << endl;//输出最优解
//}


