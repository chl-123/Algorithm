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
				swap(a[j], a[j + 1]);
				
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

void Sort::insertSort()
{
    //int num[31];
	int cur;
	int i, j;
	scanf_s("%d", &n);
	for ( i = 0; i < n; i++)
	{
		scanf_s("%d", &a[i]);
	}
	for (i = 1; i < n; i++)
	{
		cur = a[i];    //������Ԫ��
		for (j = i - 1; j >= 0 && a[j] > cur; j--)
		{
			a[j + 1] = a[j];
		}
		a[j + 1] = cur;
	}
	for (i = 0; i < n; i++)
	{
		printf_s("%d", a[i]);
	}
	
}
void Sort::Merge(int arr[], int l, int mid, int r)
{

	int* aux = new int[r - l + 1];      //��������ָ��
	int i, j, k;
	for (i = mid + l; i > l; i--)
		aux[i - l] = arr[i - l];
	for ( j = mid; j <r; j++)
		aux[r+mid-j] = arr[j+l];
	for ( k=l; k <=r; k++)
	{
		if (aux[i] < aux[j])
			arr[k] = aux[i++];
		else
			arr[k] = aux[j--];
	}
}


void Sort::MergeSort(int arr[], int l, int r)
{
	if (l >= r)
		return;
	int mid = (l + r) / 2;
	MergeSort(arr, l, mid);
	MergeSort(arr, mid + 1, r);
	Merge(arr, l, mid, r);
}
void Sort::MergeSort() {
	int n;
	int i, j;
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &a[i]);
	}
	MergeSort(a, 0, n - 1);
	for (i = 0; i < n; i++)
	{
		printf_s("%d ", a[i]);
	}
}


	
	