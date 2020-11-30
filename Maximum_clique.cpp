// �����.cpp : ���ļ����� "main" ����������ִ�н��ڴ˴���ʼ��������
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

// ���г���: Ctrl + F5 ����� >����ʼִ��(������)���˵�
// ���Գ���: F5 ����� >����ʼ���ԡ��˵�

// ����ʹ�ü���: 
//   1. ʹ�ý��������Դ�������������/�����ļ�
//   2. ʹ���Ŷ���Դ�������������ӵ�Դ�������
//   3. ʹ��������ڲ鿴���������������Ϣ
//   4. ʹ�ô����б��ڲ鿴����
//   5. ת������Ŀ��>���������Դ����µĴ����ļ�����ת������Ŀ��>�����������Խ����д����ļ���ӵ���Ŀ
//   6. ��������Ҫ�ٴδ򿪴���Ŀ����ת�����ļ���>���򿪡�>����Ŀ����ѡ�� .sln �ļ�
