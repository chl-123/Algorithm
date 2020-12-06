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
	int temp = a[left]; //temp中存的就是基准数
	int i = left;
	int j = right;
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
	for (int i = 1; i <= n - 1; i++)
	{
		for (int j = 1; j <= n - i; j++)
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
	while (n>1)
	{
		swap(h[1], h[n]);
		n--;
		siftdown(1);
	}
	
}

void Sort::siftdown(int i)
{
	int t, flag = 0;
	while (i * 2 <= n && flag == 0)
	{
		if (h[i] < h[i * 2])
			t = i * 2;
		else
			t = i;
		if (i*2+1<=n)
		{
			if (h[t] < h[i * 2 + 1])
				t = i * 2 + 1;
		}
		if (t != i)
		{
			swap(t, i);
			i = t;
		}else
			flag = 1;

	}

	
}

void Sort::heapSort_do()
{
	int i, j, t, num;
	//读入数据
	cin >> num;
	for (i = 1; i <= num; i++)
		cin >> h[i];
	//quickSort(1, n); //快速排序调用
	n = num;
	//bubbleSort();
	creat();
	heapSort();
	//输出排序后的结果
	for (i = 1; i <= num; i++)
		cout << h[i];
}

void Sort::creat()
{
	int i;
	for ( i =n/2; i>=1 ; i--)
	{
		siftdown(i);
	}

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


	
	