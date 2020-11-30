#include<iostream>
//using namespace std;
//int dis[4] = { 1,-1,4,-4 }, visit[13];
//int i1, i2, i3, i4, i5, cnt, result = 0;
//void dfs(int index)
//{
//	if (cnt >= 5)return;
//	for (int i = 0; i < 4; i++)
//	{
//		if ((dis[i] == 1 && (index == 4 || index == 8)) ||
//			(dis[i] == -1 && (index == 5 || index == 9))) continue;
//		int t = index + dis[i];
//		if (t >= 1 && t <= 12 && visit[i] == 0 && (t == i2 || t == i3 || t == i4 || t == i5))
//		{
//
//			visit[t] = 1;
//			cnt++;
//			dfs(t);
//		}
//	}
//
//}
//int main(void)
//{
//	for ( i1 = 1; i1 <= 12-4; i1++)
//	{
//		for ( i2 = i1+1; i2 <= 12-3; i2++)
//		{
//			for ( i3 =i2+1; i3 <=12-2; i3++)
//			{
//				for ( i4 = i3+1; i4 <= 12-1; i4++)
//				{
//					for ( i5 = i4+1; i5 <= 12; i5++)
//					{
//						cout << "#" << endl;
//						memset(visit, 0, sizeof(visit));
//						cnt = 1;
//						dfs(i1);
//						cout << "$" << endl;
//						if (cnt == 5) result++;
//					}
//				}
//			}
//		}
//	}
//
//
//	cout << result;
//
//	return 0;
//
//}
