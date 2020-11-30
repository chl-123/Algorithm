#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;


class slution
{

public:
	int coinChance(vector<int>& coins, int amounts)
	{
		vector<int> dp(amounts + 1, -1);
		dp[0] = 0;
		for (int i = 1; i <= amounts; i++)
		{
			for (int j = 0; j < coins.size(); j++)
			{
				if (i >= coins[j] && dp[i - coins[j]] != -1)
				{
					if (dp[i] > 0)
					{
						dp[i] = min(dp[i], dp[i - coins[j]] + 1);
					}
					else
					{
						dp[i] = dp[i - coins[j]] + 1;
					}
				}
			}
		}
		return dp[amounts];
	}


};

//int main(void)
//{
//
//	vector<int> coins;
//	coins.push_back(1);
//	coins.push_back(2);
//	coins.push_back(5);
//	int amounts;
//	cin >> amounts;
//	slution s;
//	int a=s.coinChance(coins, amounts);
//
//	cout << a;
//}
