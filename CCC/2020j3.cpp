#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
	int n;
	int bigx = -1;
	int bigy = -1;
	int smax = 101;
	int smay = 101;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x,y;
		char z;
		cin >> x >> z >> y;
		bigx = max(x,bigx);
		bigy = max(y,bigy);
		smax = min(x,smax);
		smay = min(y,smay);
	}
	cout << (smax-1) << ',' << (smay-1) << '\n';
	cout << (bigx+1) << ',' << (bigy+1) << '\n';
}