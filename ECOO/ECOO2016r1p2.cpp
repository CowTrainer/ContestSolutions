#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    for (int i = 0; i < 10; i++)
    {
    	// variable set
    	int n;
    	set<int> perms, perms2, perms3;
    	int count = 0;
    	cin >> n;

    	// first generation
    	for (int j = 0; j < n; j++)
    	{
    		int tem;
    		cin >> tem;
    		perms.insert(tem);
    	}

    	// second generation
    	for(auto it = perms.begin(); it != perms.end(); it++)
    	{
    		for(auto it2 = perms.begin(); it2 != perms.end(); it2++)
    		{	
    			perms2.insert((*it2) + *it);
    			perms2.insert((*it2) * *it);
    		}
    	}

    	// third generation
    	for(auto it = perms.begin(); it != perms.end(); it++)
    	{
    		for(auto it2 = perms2.begin(); it2 != perms2.end(); it2++)
    		{	
    			perms3.insert((*it2) + *it);
    			perms3.insert((*it2) * *it);
    		}
    	}
    	for (int j = 0; j < 5; j++)
    	{
    		int tem;
    		cin >> tem;
    		if(perms3.count(tem) == 1)
    		{
    			cout << 'T';
    		}
    		else
    		{
    			cout << 'F';
    		}
    	}
    	cout << '\n';
    }
}