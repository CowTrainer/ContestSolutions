#include <bits/stdc++.h>

using namespace std;

void bake()
{
	int n;
	bool good = true;
	int start = 1;
	cin >> n;
	stack<int> first;
	stack<int> hold;
	for (int i = 0; i < n; i++)
	{
		int l;
		cin >> l;
		first.push(l);
	}
	while (!first.empty())
	{
		if(first.top() == start)
		{
			first.pop();
			start++;
		}
		else if(!hold.empty())
		{
			int h = hold.top();
			if(h == start)
			{
				hold.pop();
				start++;
			}
			else if(first.top() > h)
			{
				good = false;
				break;
			}
			else if(first.top() < h)
			{
				hold.push(first.top());
				first.pop();
			}
		}
		else
		{
			hold.push(first.top());
			first.pop();
		}
	}
	if(good)
	{
		cout << 'Y' << '\n';
	}
	else
	{
		cout << 'N' << '\n';
	}
}

int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		bake();
	}
}
