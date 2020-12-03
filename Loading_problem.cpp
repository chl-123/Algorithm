// 装载问题.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include<iostream>
using namespace std;
extern int n;//集装箱数  
extern int w[40];//集装箱重量
int c1, c2;//两艘船的载重量  
int ans;//当前载重量  
int bestans;//当前最优载重量  
int r;//剩余集装箱重量 
 void backtrack2(int i)
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
        backtrack2(i + 1);
        //改回辅助的全局变量 
        ans -= w[i];
    }
    if (ans + r > bestans) backtrack2(i + 1);
    //改回辅助的全局变量 
    r += w[i];
}
int maxloading()
{
    ans = 0;
    bestans = 0;
    backtrack2(1);
    return bestans;
}

void MaxLoading()
{
    cin >> n >> c1 >> c2;
    int i = 1;
    int sum = 0;
    //集装箱总重量 
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

