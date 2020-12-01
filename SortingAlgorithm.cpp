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


	
	