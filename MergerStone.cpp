// ʯͷ�ϲ�.cpp : ���ļ����� "main" ����������ִ�н��ڴ˴���ʼ��������
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

// ���г���: Ctrl + F5 ����� >����ʼִ��(������)���˵�
// ���Գ���: F5 ����� >����ʼ���ԡ��˵�

// ����ʹ�ü���: 
//   1. ʹ�ý��������Դ�������������/�����ļ�
//   2. ʹ���Ŷ���Դ�������������ӵ�Դ�������
//   3. ʹ��������ڲ鿴���������������Ϣ
//   4. ʹ�ô����б��ڲ鿴����
//   5. ת������Ŀ��>���������Դ����µĴ����ļ�����ת������Ŀ��>�����������Խ����д����ļ���ӵ���Ŀ
//   6. ��������Ҫ�ٴδ򿪴���Ŀ����ת�����ļ���>���򿪡�>����Ŀ����ѡ�� .sln �ļ�
