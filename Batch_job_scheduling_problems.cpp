//// 批处理作业调度问题.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
#define MAX 200
int* x1;//作业Ji在机器1上的工作时间
int* x2;//作业Ji在机器2上的工作时间
int number = 0;//作业的数目
int* xorder;//作业顺序
int* bestorder;//最优的作业顺序
int bestvalue = MAX;//最优的时间
int xvalue = 0;//当前完成用的时间
int f1 = 0;//机器1完成的时间
int* f2;//机器2完成的时间
extern void backtrack(int k)
{
    if (k > number)
    {
        for (int i = 1; i <= number; i++) bestorder[i] = xorder[i];
        bestvalue = xvalue;
    }
    else
    {
        for (int i = k; i <= number; i++)
        {
            f1 += x1[xorder[i]];
            f2[k] = (f2[k - 1] > f1 ? f2[k - 1] : f1) + x2[xorder[i]];
            xvalue += f2[k];
            swap(xorder[i], xorder[k]);
            if (xvalue < bestvalue) backtrack(k + 1);
            swap(xorder[i], xorder[k]);
            xvalue -= f2[k];
            f1 -= x1[xorder[i]];
        }
    }

}

void Batch_job_scheduling()
{
    cout << "请输入作业数目：";
    cin >> number;
    x1 = new int[number + 1];
    x2 = new int[number + 1];
    xorder = new int[number + 1];
    bestorder = new int[number + 1];
    f2 = new int[number + 1];
    x1[0] = 0;
    x2[0] = 0;
    xorder[0] = 0;
    bestorder[0] = 0;
    f2[0] = 0;
    cout << "请输入每个作业在机器1上所用的时间：" << endl;
    int i;
    for (i = 1; i <= number; i++)
    {
        cout << "第" << i << "个作业=";
        cin >> x1[i];
    }
    cout << "请输入每个作业在机器2上所用的时间：" << endl;
    for (i = 1; i <= number; i++)
    {
        cout << "第" << i << "个作业=";
        cin >> x2[i];
    }
    for (i = 1; i <= number; i++) xorder[i] = i;
    backtrack(1);
    cout << "最节省的时间为：" << bestvalue << endl;
    cout << "对应的方案为：";
    for (i = 1; i <= number; i++) cout << bestorder[i] << "  ";
    cout << endl;
}
