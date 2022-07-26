#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
	map<string, string> mom;
	map<string, vector<string>> daughter;
	int n; 
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string momt, daughtert;
		cin >> momt >> daughtert;
	   	mom[daughtert] = momt;
	   	daughter[momt];
	   	daughter[momt].push_back(daughtert);
	}   
	for (int i = 0; i < 10; i++)
	{
		int sisters, cousins;
		string target;
		cin >> target;
		sisters = daughter[mom[target]].size() - 1;
		cousins = 0;
		for(string d : daughter[mom[mom[target]]])
		{
			for(string e : daughter[d])
			{
				cousins++;
			}
		}
		cout << "Cousins: " << (cousins - sisters - 1) << ", Sisters: " << sisters << '\n';
	}
}