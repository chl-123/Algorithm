// 装载问题.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include<iostream>
using namespace std;
int n;//集装箱数  
int w[40];//集装箱重量
int c1, c2;//两艘船的载重量  
int ans;//当前载重量  
int bestans;//当前最优载重量  
int r;//剩余集装箱重量 
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
        //改回辅助的全局变量 
        ans -= w[i];
    }
    if (ans + r > bestans) backtrack(i + 1);
    //改回辅助的全局变量 
    r += w[i];
}
int maxloading()
{
    ans = 0;
    bestans = 0;
    backtrack(1);
    return bestans;
}

//int main()
//{
//    cin >> n >> c1 >> c2;
//    int i = 1;
//    int sum = 0;
//    //集装箱总重量 
//    while (i <= n)
//    {
//        cin >> w[i];
//        r += w[i];
//        sum += w[i];
//        i++;
//    }
//    maxloading();
//    if (bestans > 0 && ((sum - bestans) <= c2)) cout << bestans << endl;
//    else if (sum <= c2) cout << bestans << endl;
//    else cout << "No" << endl;
//}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
