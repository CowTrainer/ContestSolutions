#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
 	string x;
 	while(true)
 	{
 		cin >> x;
 		int y = x.length();
 		if(x.compare("quit!") == 0)
 		{
 			break;
 		}
 		if(y > 4 && (x[y-3] != 'a' && x[y-3] != 'e' && x[y-3] != 'i' && x[y-3] != 'o' && x[y-3] != 'u' && x[y-3] != 'y') && ((x.substr(y-2,2)).compare("or") == 0))
 		{
 			x.replace(y-2, 3, "our");
 		}
 		cout << x << '\n';
 	}   

}