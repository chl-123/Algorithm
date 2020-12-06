#include "Shortest_path.h"
#include<iostream>
using namespace std;
void creat_Graph( bool direct)
{
	int i, j, inf = 99999999, num;
	cin >> n ;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (i==j)
			{
				graph[i][j] = 0;
			}
			else
				graph[i][j] = inf;
		}
	}
	for (int k = 1; k <= n; k++)
	{
		cin >> i >> j>>num;
		graph[i][j] = num;
		if (direct)
		{

			graph[j][i] = num;
		}
		
	}
}

void Floyd()
{
	int k, i, j;
	for ( k= 1; k <=n; k++)
		for (i = 0; i <=n; i++)
			for (j = 0; j <=n; j++)
				if (graph[i][j]>graph[i][k]+graph[k][j])
					graph[i][j] = graph[i][k] + graph[k][j];
				
	
}
