// ��̬�滮-����������.cpp : ���ļ����� "main" ����������ִ�н��ڴ˴���ʼ��������
//

//#include <iostream>
//#include<algorithm>

#include <iostream>
using namespace std;
#define maxindex 101
int maxsum[maxindex][maxindex];
int D[maxindex][maxindex];
int n, m;



void  Triangles()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <=i ; j++)
		{
			cin >> D[i][j];
		}
	}
	for (int i = 1; i <= n; i++)
	{
		maxsum[n ][i] = D[n ][i];
	}
	for ( int i = n-1;  i >0;  i--)
	{
		for (int j = 1; j <=i; j++)
		{
			maxsum[i][j] = max(maxsum[i + 1][j], maxsum[i + 1][j + 1]) + D[i][j];
		}
	}
}

