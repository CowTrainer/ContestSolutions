#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int wins = 0;
    for (int i = 0; i < 6; i++)
    {
    	char res;
    	cin >> res;
    	if (res == 'W')
    	{
    		wins++;
    	}
    }
    if (wins > 4)
    	cout << '1';
    else if (wins > 2)
    	cout << '2';
    else if (wins > 0)
    	cout << '3';
    else
    	cout << "-1";
}