#include<iostream>
#include<vector>
#include<set>
#include "Graph_coloring_judge.h"
using namespace std;
extern int n,m;
int  k, num;
vector<vector<int>> v(520);
vector<int> color(510);
bool f(int i)
{

	for (int j = 0; j < v[i].size(); j++)
	{
		if (color[i] == color[v[i][j]])
			return false;
	}
	return true;
}
void Graph_coloring_judge()
{
	cin >> n >> m >> k;
	for (int i = 0; i < m; i++)
	{
		int t1, t2;
		cin >> t1 >> t2;
		v[t1].push_back(t2);
		v[t2].push_back(t1);

	}
	cin >> num;
	while (num--)
	{

		int flag = 0;
		set<int >s;
		for (int i = 0; i <= n; i++)
		{
			cin >> color[i];
			s.insert(color[i]);
		}
		if (s.size() != k)
		{
			flag = 1;
			cout << "no\n";
		}
		else
		{
			for (int i = 1; i <= n; i++)
			{
				if (f(i) == false)
				{

					cout << "no\n";
					flag = 1;
					break;
				}
			}

		}
		if (flag == 0)cout << "yes\n";
	}

}
