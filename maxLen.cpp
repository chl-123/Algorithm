// �����������.cpp : ���ļ����� "main" ����������ִ�н��ڴ˴���ʼ��������
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
	for (int i = 2; i <= n; ++i)  //ÿ�����Ե�i����Ϊ�յ������������еĳ���   
		for (int j = 1; j < i; ++j)  //�쿴�Ե�j����Ϊ�յ�������������    
			if (a[i] > a[j])
				maxlen[i] = max(maxlen[i], maxlen[j] + 1);
	
	cout << *max_element(maxlen + 1, maxlen + n + 1);
	
}

