#include<iostream>
#include<cmath>
using namespace std;
void Number_guessing()
{
	int n, t, sum = 0, mindet = 100, minid;
	string name, a[110];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> name >> t;
		a[t] = name;
		sum += t;
	}
	double avg = 0.5 * sum / n;
	for (int i = 0; i <= 100; i++)
	{
		if (a[i] != "" && abs(avg - 1) < mindet)
		{
			minid = i;
			mindet = abs(avg - i);

		}
	}
	cout << (int)avg << "" << a[minid];
	                  
}