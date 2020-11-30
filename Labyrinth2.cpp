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
//int main()
//{
//
//
//    
//    int s;
//
//
//    ifstream infile;//定义读取文件流，相对于程序来说是in
//    infile.open("1.txt");//打开文件
//    for (int i = 0; i < 8; i++)//定义行循环
//    {
//        for (int j = 0; j < 8; j++)//定义列循环
//        {
//            infile >> a[i][j];
//            ;//读取一个值（空格、制表符、换行隔开）就写入到矩阵中，行列不断循环进行
//        }
//    }
//    infile.close();//读取完成之后关闭文件
//    for (int i = 0; i < 8; i++)
//    {
//        for (int j = 0; j < 8; j++)//定义列循环
//        {
//            cout << a[i][j] << "";//读取一个值（空格、制表符、换行隔开）就写入到矩阵中，行列不断循环进行
//        }
//        cout << endl;
//    }
//    // cin >> n >> m >> p >> q;
//    book[1][1] = 1;
//    dfs(1, 1, 0);
//    for (int i = 0; i < 8; i++)
//    {
//        for (int j = 0; j < 8; j++)//定义列循环
//        {
//            cout << book[i][j] << "";//读取一个值（空格、制表符、换行隔开）就写入到矩阵中，行列不断循环进行
//        }
//        cout << endl;
//    }
//    cout << T_min;
//
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
