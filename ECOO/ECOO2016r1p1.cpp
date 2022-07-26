#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    for (int i = 0; i < 10; i++)
    {
    	int w1, w2, w3, w4, s;
    	cin >> w1 >> w2 >> w3 >> w4 >> s;
    	int count = 0;
    	for (int j = 0; j < s; j++)
    	{
    		int s1, s2, s3, s4;
    		cin >> s1 >> s2 >> s3 >> s4;
    		if(((s1*w1) + (s2*w2) + (s3*w3) + (s4*w4)) >= 5000)
    		{
    			count++;
    		}
    	}
    	cout << count << '\n';
    }
}