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

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
