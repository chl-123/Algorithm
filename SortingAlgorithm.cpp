#include<io.h>
#include<stdio.h>
#include <iostream>
#include"SortAlgorithm.h"
//���������㷨
using namespace std;

template<class T>
void Sort::swap(T &a, T &b)
{
	T t;
	t = a;
	a = b;
	b = t;
}
void Sort::quickSort(int left, int right)
{
	
	if (left > right)
		return;
	temp = a[left]; //temp�д�ľ��ǻ�׼��
	i = left;
	j = right;
	while (i != j)
	{
		//˳�����Ҫ��Ҫ�ȴ���������
		while (a[j] >= temp && i < j)
			j--;
		//�ٴ���������
		while (a[i] <= temp && i < j)
			i++;
		//�����������������е�λ��
		if (i < j)//���ڱ�i���ڱ�jû������ʱ
		{
			swap(a[i], a[j]);
		}
	}
	a[left] = a[i];
	a[i] = temp;
	//quicksort(left, i - 1);
	quickSort(left, i - 1);//����������ߵģ�������һ���ݹ�Ĺ���
	quickSort(i + 1, right);//���������ұߵģ�������һ���ݹ�Ĺ���
}
void Sort::bubbleSort()
{
	//��ʼð������
	for (i = 1; i <= n - 1; i++)
	{
		for (j = 1; j <= n - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				t = a[j]; a[j] = a[j + 1]; a[j + 1] = t;
			}
		}
	}
}
void Sort::sort_do() {
	int i, j, t;
	//��������
	cin >> n;
	for (i = 1; i <= n; i++)
		cin >> a[i];
	//quickSort(1, n); //�����������
	bubbleSort();
	//��������Ľ��
	for (i = 1; i <= n; i++)
		cout << a[i];
}

void Sort::heapSort()
{
	
}


	
	