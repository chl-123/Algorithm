// 素数环.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
//
//#include<stdio.h>  
//#include <string.h>  
//
//#define M 40  
//
//int isPrime[M];////素数表,下标为素数的置为1,否则0  
//int vis[M >> 1];// vis 标识 1-n,是否被选  
//int res[M >> 1];// 存储解向量  
//
//int cnt;// 测试样例个数  
//
//void prime()//求出1-40的所有素数  
//{
//    int i, j;
//    for (i = 1; i < M; ++i)
//    {
//        int ok = 1;
//        for (j = 2; j * j <= i; ++j)
//        {
//            if (i % j == 0)
//            {
//                ok = 0;
//                break;
//            }
//        }
//        if (ok)
//            isPrime[i] = 1;
//
//    }
//}
//
//void dfs(int cur, int n)
//{
//    int i;
//    if (cur == n && isPrime[res[n - 1] + res[0]])//别忘了测试边界，最后一个和第一个数 构成的环  
//    {
//        for (i = 0; i < n - 1; ++i)
//            printf("%d ", res[i]);
//        printf("%d\n", res[i]);
//    }
//    else
//    {
//        for (i = 2; i <= n; i++)// 尝试每个i, 1始终在排头,因此从2开始计算  
//        {
//            if (!vis[i] && isPrime[res[cur - 1] + i])// i未用过且和前一个数和为素数  
//            {
//                res[cur] = i;
//                vis[i] = 1; // 设置标志  
//                dfs(cur + 1, n);
//                vis[i] = 0; // 回溯, 清除标识  
//            }
//        }
//    }
//}


//int main()
//{
//    int n;
//    //freopen("in.txt", "r", stdin);  
//    prime();
//    cnt = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        ++cnt;
//        printf("Case %d:\n", cnt);
//        memset(vis, 0, sizeof(vis));
//        res[0] = 1;
//        dfs(1, n);
//        printf("\n");
//    }
//    return 0;
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
