#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int c, n;
    cin >> c >> n;
    if(c == 1)
    {
    	vector<int> d(n), p(n);
    	int sum = 0;
    	for (int i = 0; i < n; i++)
    	{
    		cin >> d[i];
    	}
    	for (int i = 0; i < n; i++)
    	{
    		cin >> p[i];
    	}
    	sort(d.begin(), d.end());
    	sort(p.begin(), p.end());
    	for (int i = 0; i < n; i++)
    	{
    		sum += max(d[i],p[i]);
    	}
    	cout << sum;
    }
    else
    {
    	vector<int> a(2*n);
    	int sum = 0;
    	for (int i = 0; i < (2*n); i++)
    	{
    		cin >> a[i];
    	}
    	sort(a.begin(), a.end());
    	for(int i = (2*n-1); i >= (n); i--)
    	{
    		sum += a[i];
    	}
    	cout << sum;
    }
    return 0;
}