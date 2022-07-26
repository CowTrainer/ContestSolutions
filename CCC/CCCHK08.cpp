//https://dmoj.ca/problem/hkccc08j3

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
	// initialize
	int n;
	cin >> n;
    map<string,string> book;
    map<string,int> count;
    for (int i = 0; i < n; i++)
    {
    	string num;
    	string name;
    	cin >> name >> num;
    	book[num] = name;
    	count[num] = 0;
    }
    cin >> n;
    for (int i = 0; i < n; i++)
    {
    	string num;
    	cin >> num;
    	count[num]++;
    }
    int max = 0;
    string firstval = "0";
    string secondval = "0";
    for (auto const&x : count)
    {
    	if(x.second > max)
    	{
    		max = x.second;
    		firstval = x.first;
    		secondval = "0";
    	}
    	else if (x.second == max)
    	{
    		secondval = x.first;
    	}
    }
    if (stoi(secondval) < stoi(firstval) && stoi(secondval) != 0)
    {
    	cout << book[secondval];
    }
    else
    {
    	cout << book[firstval];
    }
}