#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int sum = 0;
	int count = 0;
	for (int i = 1; i <= floor(n/4.0); i++)
	{
		sum += 4;
		if((n-sum) <= i)
		{
			count++;
		}
	}
	cout << count;
}