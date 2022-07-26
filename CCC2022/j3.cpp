#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
	char l;
	while(cin >> l)
	{
		if(l == '-')
		{
			cout << " loosen";
			int le;
			cin >> le;
			cout << ' ' << le;
			cout << '\n';
		}
		else if (l == '+')
		{
			cout << " tighten";
			int le;
			cin >> le;
			cout << ' ' << le;
			cout << '\n';
		}
		else
		{
			cout << l;
		}
	}
}