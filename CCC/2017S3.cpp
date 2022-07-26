#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
	int n;
	map<int,int> ints;
	map<int,int> sums;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int l;
		cin >> l;
		ints[l]++;
	}
	for (int i = 1; i <= 2000; i++)
	{
		for (int j = i; j <= 2000; j++)
		{
			if(i != j)
				sums[i+j] += min(ints[i],ints[j]);
			else
				sums[i + j] += floor(ints[i]/2.0);
		}
	}
	int bignum = 0;
	int count = 0;
	for (auto it = sums.begin(); it != sums.end(); it++)
	{
		if (it->second >= bignum)
		{
			if (it->second == bignum)
			{
				count++;
			}
			else
			{
				bignum = it->second;
				count = 1;
			}
		}
	}
	cout << bignum << ' ' << count << '\n';
} 