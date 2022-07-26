#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    // take input
    int m, n, k;

    //define gold
    int gold = 0;
    cin >> m >> n >> k;

    // create arrays with zeros
    int rows[m] = {};
    int cols[n] = {};

    for(int i = 0; i < k; i++)
    {
        // take in each artist command
    	char c;
    	int x;
    	cin >> c >> x;

        // add it to respective array space
    	if (c == 'R')
    	{
    		rows[x-1]++;
    	}
    	else
    	{
    		cols[x-1]++;
    	}
    }

    // "simulate" each cell by adding up how many times it is painted over.
    for (int i = 0; i < m; i++)
    {
    	for (int j = 0; j < n; j++)
    	{
    		int val = rows[i] + cols[j];
    		if(val % 2 != 0) gold++;
    	}
    }

    cout << gold;
}