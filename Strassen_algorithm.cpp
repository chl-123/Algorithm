
//矩阵连乘
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
		m[t][t] = 0;             //单一矩阵的情况  一个矩阵数乘次数为0
		s[t][t] = -1;
	}
	for (int l = 2; l <= n; l++)               //l为段长 
	{
		for (int i = 0; i <= n - l; i++)
		{
			int j = i + l - 1;              //j为每段的起点   
			m[i][j] = m[i][i] + m[i + 1][j] + p[i] * p[i + 1] * p[j + 1];     //类似于赋初值的功能，其可取i<=k<j中的任意一个
			s[i][j] = i;
			for (int k = i + 1; k < j; k++)                         //改变断点，试探出最小的情况
			{
				if (m[i][k] + m[k + 1][j] + p[i] * p[k + 1] * p[j + 1] < m[i][j])
				{
					m[i][j] = m[i][k] + m[k + 1][j] + p[i] * p[k + 1] * p[j + 1];
					s[i][j] = k;                            //记录断点位置
				}
			}
		}
	}
	cout << "\n最少数乘为 " << m[0][n - 1] << endl << endl;
	outPut(0, n - 1, s);
}
void MartrixChain_do()
{
	int num;
	int* dimension;
	int** mm;
	int** ss;
	cin >> num;
	dimension = new int[num + 1];     //矩阵维数
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