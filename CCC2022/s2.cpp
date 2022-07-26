#include <bits/stdc++.h>

using namespace std;


int main()
{
	int x,y,g;
	map<string, vector<string>> in;
	map<string, vector<string>> out;
	cin >> x;
	for(int i = 0; i < x; i++)
	{
		string a,b;
		cin >> a >> b;
		in[a].push_back(b);
	}
	cin >> y;
	for(int i = 0; i < y; i++)
	{
		string a,b;
		cin >> a >> b;
		out[a].push_back(b);
	}
	cin >> g;
	int count = 0;
	for (int i = 0; i < g; i++)s
	{
		string a,b,c;
		cin >> a >> b >> c;
		// check for a
		for(int i = 0; i < in[a].size(); i++)
		{
			if (b != in[a][i] && c != in[a][i])
			{
				count++;
			}
		}
		for(int i = 0; i < out[a].size(); i++)
		{
			if (b == out[a][i] || c == out[a][i])
			{
				count++;
			}
		}
		// check for b
		for(int i = 0; i < in[b].size(); i++)
		{
			if (a != in[b][i] && c != in[b][i])
			{
				count++;
			}
		}
		for(int i = 0; i < out[b].size(); i++)
		{
			if (a == out[b][i] || c == out[b][i])
			{
				count++;
			}
		}

		// check for c
		for(int i = 0; i < in[c].size(); i++)
		{
			if (b != in[c][i] && a != in[c][i])
			{
				count++;
			}
		}
		for(int i = 0; i < out[c].size(); i++)
		{
			if (b == out[c][i] || a == out[c][i])
			{
				count++;
			}
		}
	}
	cout << count;

	
}