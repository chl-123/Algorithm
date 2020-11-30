// ͼ����ɫ.cpp : ���ļ����� "main" ����������ִ�н��ڴ˴���ʼ��������
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

// ���г���: Ctrl + F5 ����� >����ʼִ��(������)���˵�
// ���Գ���: F5 ����� >����ʼ���ԡ��˵�

// ����ʹ�ü���: 
//   1. ʹ�ý��������Դ��������������/�����ļ�
//   2. ʹ���Ŷ���Դ�������������ӵ�Դ�������
//   3. ʹ��������ڲ鿴���������������Ϣ
//   4. ʹ�ô����б����ڲ鿴����
//   5. ת������Ŀ��>����������Դ����µĴ����ļ�����ת������Ŀ��>������������Խ����д����ļ����ӵ���Ŀ
//   6. ��������Ҫ�ٴδ򿪴���Ŀ����ת�����ļ���>���򿪡�>����Ŀ����ѡ�� .sln �ļ�