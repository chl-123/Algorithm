#pragma once

class Sort
{
public:
	template <class T>
	void swap(T &a,T &b);
	//void quickSort();
	void quickSort(int left, int right);
	void bubbleSort();
	void sort_do();
	void heapSort();
	void siftdown(int i);
	void heapSort_do();
	void creat();
	void insertSort();
	void Merge(int arr[], int l, int mid, int r);
	void MergeSort(int arr[], int l, int r);
	void MergeSort();
private:
	int a[101],n,h[101];
	//int i, j, t, temp;
	
};


