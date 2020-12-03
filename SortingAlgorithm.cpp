#include<io.h>
#include<stdio.h>
#include <iostream>
#include"SortAlgorithm.h"
//快速排序算法
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
	temp = a[left]; //temp中存的就是基准数
	i = left;
	j = right;
	while (i != j)
	{
		//顺序很重要，要先从右往左找
		while (a[j] >= temp && i < j)
			j--;
		//再从左往右找
		while (a[i] <= temp && i < j)
			i++;
		//交换两个数在数组中的位置
		if (i < j)//当哨兵i和哨兵j没有相遇时
		{
			swap(a[i], a[j]);
		}
	}
	a[left] = a[i];
	a[i] = temp;
	//quicksort(left, i - 1);
	quickSort(left, i - 1);//继续处理左边的，这里是一个递归的过程
	quickSort(i + 1, right);//继续处理右边的，这里是一个递归的过程
}
void Sort::bubbleSort()
{
	//开始冒泡排序
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
	//读入数据
	cin >> n;
	for (i = 1; i <= n; i++)
		cin >> a[i];
	//quickSort(1, n); //快速排序调用
	bubbleSort();
	//输出排序后的结果
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
		cur = a[i];    //待排序元素
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

	int* aux = new int[r - l + 1];      //创建数组指针
	for (int i = l; i <= r; i++) //拷贝数组
	{
		aux[i - l] = arr[i];
	}

	int i = l, j = mid + 1;         //将数组分成两部分进行比较
	for (int k = l; k <= r; k++)
	{
		//判断位置合法性，左端已遍历结束
		if (i > mid)
		{
			arr[k] = aux[j - l];
			j++;
		}//判断位置合法性，右端遍历已结束
		else if (j > r)
		{
			arr[k] = aux[i - l];
			i++;
		}//合法情况，进行比较
		else if (aux[i - l] < aux[j - l])
		{
			arr[k] = aux[i - l];
			i++;
		}
		else
		{
			arr[k] = aux[j - l];
			j++;
		}
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


	
	