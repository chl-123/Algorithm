//#include<vector>
//#include<algorithm>
//#include<cstdio>
//#include<iostream>
////using namespace std;
//int dp[10000];
//int w[10000];
//bool choice[10000][10000];
//int cmpl(int a, int b)
//{
//	return a > b;
//}
////int main(void)
////{
////	int n, m;
////	cin >> n >> m;
////	for (int i = 1; i <= n; i++)
////	{
////		cin >> w[i];
////	}
////	sort(w + 1, w + n + 1, cmpl);
////	for (int i = 1; i <= n; i++)
////	{
////		for (int j = m; j >= w[i]; j--)
////		{
////			if (dp[j] <= dp[j - w[i]] + w[i])
////			{
////				choice[i][j] = true;
////				dp[j] = dp[j - w[i]] + w[i];
////			}
////		}
////	}
////	if (dp[m] != m)
////	{
////		cout << "no solution" << endl;
////	}
////	else
////	{
////		vector<int> arr;
////		int v = m, index = n;
////		while (v > 0)
////		{
////			if (choice[index][v] == true) {
////
////				arr.push_back(w[index]);
////				v -= w[index];
////			}
////			index--;
////		}
////		for (int i = 0; i < arr.size(); i++)
////		{
////			cout << arr[i] << endl;
////		}
////
////	}
////}
