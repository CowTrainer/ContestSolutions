#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
	// Initalize maps and variables
	map<int, int> list;
	map<pair <int,int>, int> list2;
	int n;
	cin >> n;
	ll total = 0;
	for (int i = 0; i < n; i++)
	{
		// Take input
		int m, b;
		cin >> m >> b;

		// Add the total possible intersections, minus the same slope
		total += i - list[m];

		// Increment the same slope counter
		list[m]++;

		// Add back the congruent lines you removed in the first operation
		total += list2[{m,b}];

		// Increment the slope + intercept counter
		list2[{m,b}]++;
	}
	cout << total;
}