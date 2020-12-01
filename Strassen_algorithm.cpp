
//��������
#include<iostream>
using namespace std;
void outPut(int i, int j, int** s)
{
	if (i == j)
		return;
	outPut(i, s[i][j], s);
	outPut(s[i][j] + 1, j, s);
	cout << "Multiply A " << i << "," << s[i][j];
	cout << " and A" << s[i][j] + 1 << "," << j << endl;
}
void MartrixChain(int n, int* p, int** m, int** s)
{
	for (int t = 0; t < n; t++)
	{
		m[t][t] = 0;             //��һ��������  һ���������˴���Ϊ0
		s[t][t] = -1;
	}
	for (int l = 2; l <= n; l++)               //lΪ�γ� 
	{
		for (int i = 0; i <= n - l; i++)
		{
			int j = i + l - 1;              //jΪÿ�ε����   
			m[i][j] = m[i][i] + m[i + 1][j] + p[i] * p[i + 1] * p[j + 1];     //�����ڸ���ֵ�Ĺ��ܣ����ȡi<=k<j�е�����һ��
			s[i][j] = i;
			for (int k = i + 1; k < j; k++)                         //�ı�ϵ㣬��̽����С�����
			{
				if (m[i][k] + m[k + 1][j] + p[i] * p[k + 1] * p[j + 1] < m[i][j])
				{
					m[i][j] = m[i][k] + m[k + 1][j] + p[i] * p[k + 1] * p[j + 1];
					s[i][j] = k;                            //��¼�ϵ�λ��
				}
			}
		}
	}
	cout << "\n��������Ϊ " << m[0][n - 1] << endl << endl;
	outPut(0, n - 1, s);
}
void MartrixChain_do()
{
	int num;
	int* dimension;
	int** mm;
	int** ss;
	cin >> num;
	dimension = new int[num + 1];     //����ά��
	mm = new int* [num];
	ss = new int* [num];
	for (int i = 0; i < num; i++)
	{
		mm[i] = new int[num];
		ss[i] = new int[num];
	}
	for (int r = 0; r <= num; r++)
		cin >> dimension[r];
	MartrixChain(num, dimension, mm, ss);
}