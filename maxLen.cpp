// 最长上升子序列.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//


//#include <iostream> 
#include <cstring> 
#include <algorithm> 
#include <iostream>
#include"maxLen.h"
using namespace std;

const int  maxn = 1010;
int a[maxn];   int maxlen[maxn];

void  maxLen() 
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
		maxlen[i] = 1;
	}
	for (int i = 2; i <= n; ++i)  //每次求以第i个数为终点的最长上升子序列的长度   
		for (int j = 1; j < i; ++j)  //察看以第j个数为终点的最长上升子序列    
			if (a[i] > a[j])
				maxlen[i] = max(maxlen[i], maxlen[j] + 1);
	
	cout << *max_element(maxlen + 1, maxlen + n + 1);
	
}

