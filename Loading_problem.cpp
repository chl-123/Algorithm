// װ������.cpp : ���ļ����� "main" ����������ִ�н��ڴ˴���ʼ��������
//
#include<iostream>
using namespace std;
int n;//��װ����  
int w[40];//��װ������
int c1, c2;//���Ҵ���������  
int ans;//��ǰ������  
int bestans;//��ǰ����������  
int r;//ʣ�༯װ������ 
void backtrack(int i)
{
    if (i > n)
    {
        if (ans > bestans) bestans = ans;
        return;
    }
    r -= w[i];
    if (ans + w[i] <= c1)
    {
        ans += w[i];
        backtrack(i + 1);
        //�Ļظ�����ȫ�ֱ��� 
        ans -= w[i];
    }
    if (ans + r > bestans) backtrack(i + 1);
    //�Ļظ�����ȫ�ֱ��� 
    r += w[i];
}
int maxloading()
{
    ans = 0;
    bestans = 0;
    backtrack(1);
    return bestans;
}

void MaxLoading()
{
    cin >> n >> c1 >> c2;
    int i = 1;
    int sum = 0;
    //��װ�������� 
    while (i <= n)
    {
        cin >> w[i];
        r += w[i];
        sum += w[i];
        i++;
    }
    maxloading();
    if (bestans > 0 && ((sum - bestans) <= c2)) cout << bestans << endl;
    else if (sum <= c2) cout << bestans << endl;
    else cout << "No" << endl;
}

