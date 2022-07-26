#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
	int n, m;
	cin >> n >> m;
	string adj[n];
	for (int i = 0; i < n; i++)
	{
	    cin >> adj[i];
	}
	for (int i = 0; i < m; i++)
	{
	    string noun;
	    cin >> noun;
	    for (int i = 0; i < n; i++)
	    {
	    	cout << adj[i] << " as " << noun << '\n';
	    }
	}    
}