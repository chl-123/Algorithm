//≤ø¬‰Œ Ã‚
#include<cstdio>
#include<set>
using namespace std;
int Father[200];
int findFather(int x)
{
	while (Father[x] != x)
	{
		x = Father[x];
	}


	return x;

}
set<int> total;
void unionFather(int a, int b)
{

	total.insert(a);
	total.insert(b);
	int fa = findFather(a), fb = findFather(b);
	if (fa > fb)
	{
		Father[fa] = fb;
	}
	else
	{
		Father[fb] = fa;
	}

}
void Tribal_problem()
{

	for (int i = 0; i < 200; i++)
	{
		Father[i] = i;
	}
	int n, k, t, s, q;
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d %d", &k, &t);
		if (k == 1)
		{
			unionFather(t, t);
		}
		for (int j = 1; j < k; j++)
		{
			scanf_s("%d", &s);
			unionFather(t, s);
		}
	}
	set<int> cnt;

	for (auto it=total.begin();it != total.end();it++)
	{
		cnt.insert(findFather(*it));
	}
	printf_s("%lu %lu\n", total.size(), cnt.size());
	scanf_s("%d", &q);
	for (int i = 0; i < q; i++)

	{
		scanf_s("%d %d", &t, &s);
		printf_s("%c\n", findFather(t) == findFather(s) ? 'Y' : 'N');
	}
}
