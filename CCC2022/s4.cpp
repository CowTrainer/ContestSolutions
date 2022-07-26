#include <bits/stdc++.h>

using namespace std;


int main()
{
	int n, c;
	cin >> n >> c;
	map <int, int> points;
	for (int i = 0; i < n; i++)
	{
		int l;
		cin >> l;
		points[l]++;
	}
	for(auto it = points.begin(); it != points.end(); it++)
	{
		for(auto it2 = points.begin()+1; it2 != points.end(); it2++)
		{
			for(auto it3 = points.begin()+2; it3 != points.end(); it3++)
			{
				if(min(it2->first,it3->first) < (c/2.0) && max(it2->first,it3->first) > (c/2.0))
					

			}
		}

	}
	
}