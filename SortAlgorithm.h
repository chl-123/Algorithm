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
private:
	int a[101],n;
	int i, j, t, temp;
	
};


