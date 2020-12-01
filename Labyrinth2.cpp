// 迷宫问题2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<fstream>
#include<typeinfo>
using namespace std;

int T_min = 10000;
int book[51][51], a[51][51], target[51][51];

void dfs(int x, int y, int step)
{
    int move[4][2] = { 0,1,1,0,0,-1,-1,0 };
    int tx, ty, k;
    if (x == 7 && y == 7)
    {

        if (step < T_min)
        {
            T_min = step;
            for (int i = 0; i < 8; i++)
            {
                for (int j = 0; j < 8; j++)//定义列循环
                {
                    cout << book[i][j] << "";//读取一个值（空格、制表符、换行隔开）就写入到矩阵中，行列不断循环进行
                }
                cout << endl;
            }
        }
        return;
    }
    for (k = 0; k < 4; k++)
    {

        tx = x + move[k][0];
        ty = y + move[k][1];
        if (tx < 0 || tx>7 || ty < 0 || ty>7)
        {
            continue;
        }
        if (a[tx][ty] == 0 && book[tx][ty] == 0)
        {
            //char temp = book[tx][ty];
            book[tx][ty] = 1;
            dfs(tx, ty, step + 1);
            book[tx][ty] = 0;
        }

    }


    return;
}
void Labyrinth2()
{


    
    int s;

    ifstream infile;//定义读取文件流，相对于程序来说是in
    infile.open("1.txt");//打开文件
    for (int i = 0; i < 8; i++)//定义行循环
    {
        for (int j = 0; j < 8; j++)//定义列循环
        {
            infile >> a[i][j];
            //读取一个值（空格、制表符、换行隔开）就写入到矩阵中，行列不断循环进行
        }
    }
    infile.close();//读取完成之后关闭文件
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)//定义列循环
        {
            cout << a[i][j] << "";//读取一个值（空格、制表符、换行隔开）就写入到矩阵中，行列不断循环进行
        }
        cout << endl;
    }
    // cin >> n >> m >> p >> q;
    book[1][1] = 1;
    dfs(1, 1, 0);
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)//定义列循环
        {
            cout << book[i][j] << "";//读取一个值（空格、制表符、换行隔开）就写入到矩阵中，行列不断循环进行
        }
        cout << endl;
    }
    cout << T_min;

}

