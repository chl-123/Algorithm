// ������.cpp : ���ļ����� "main" ����������ִ�н��ڴ˴���ʼ��������


#include<stdio.h>  
#include <string.h>  

#define M 40  

int isPrime[M];////������,�±�Ϊ��������Ϊ1,����0  
int vis[M >> 1];// vis ��ʶ 1-n,�Ƿ�ѡ  
int res[M >> 1];// �洢������  

int cnt;// ������������  

void prime()//���1-40����������  
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
    if (cur == n && isPrime[res[n - 1] + res[0]])//�����˲��Ա߽磬���һ���͵�һ���� ���ɵĻ�  
    {
        for (i = 0; i < n - 1; ++i)
            printf("%d ", res[i]);
        printf("%d\n", res[i]);
    }
    else
    {
        for (i = 2; i <= n; i++)// ����ÿ��i, 1ʼ������ͷ,��˴�2��ʼ����  
        {
            if (!vis[i] && isPrime[res[cur - 1] + i])// iδ�ù��Һ�ǰһ������Ϊ����  
            {
                res[cur] = i;
                vis[i] = 1; // ���ñ�־  
                dfs(cur + 1, n);
                vis[i] = 0; // ����, �����ʶ  
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

