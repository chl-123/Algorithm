// 素数环.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。


#include<stdio.h>  
#include <string.h>  

#define M 40  

int isPrime[M];////素数表,下标为素数的置为1,否则0  
int vis[M >> 1];// vis 标识 1-n,是否被选  
int res[M >> 1];// 存储解向量  

int cnt;// 测试样例个数  

void prime()//求出1-40的所有素数  
{
    int i, j;
    for (i = 1; i < M; ++i)
    {
        int ok = 1;
        for (j = 2; j * j <= i; ++j)
        {
            if (i % j == 0)
            {
                ok = 0;
                break;
            }
        }
        if (ok)
            isPrime[i] = 1;

    }
}

void dfs(int cur, int n)
{
    int i;
    if (cur == n && isPrime[res[n - 1] + res[0]])//别忘了测试边界，最后一个和第一个数 构成的环  
    {
        for (i = 0; i < n - 1; ++i)
            printf("%d ", res[i]);
        printf("%d\n", res[i]);
    }
    else
    {
        for (i = 2; i <= n; i++)// 尝试每个i, 1始终在排头,因此从2开始计算  
        {
            if (!vis[i] && isPrime[res[cur - 1] + i])// i未用过且和前一个数和为素数  
            {
                res[cur] = i;
                vis[i] = 1; // 设置标志  
                dfs(cur + 1, n);
                vis[i] = 0; // 回溯, 清除标识  
            }
        }
    }
}


void Prime_ring()
{
    int n;
    //freopen("in.txt", "r", stdin);  
    prime();
    cnt = 0;
    while (scanf("%d", &n) != EOF)
    {
        ++cnt;
        printf("Case %d:\n", cnt);
        memset(vis, 0, sizeof(vis));
        res[0] = 1;
        dfs(1, n);
        printf("\n");
    }

}

