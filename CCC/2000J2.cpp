#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int m,n;
    int counter = 0;
    cin >> m >> n;
    for(int i = m; i <= n; i++)
    {
        string x = to_string(i);
        bool valid = true;
        for(int j = 0; j < x.length(); j++)
        {       

            if(x[j] == '6')
            {
                if(x[x.length() - 1 - j] != '9')
                {
                    valid = false;
                    break;
                }
            }
            else if(x[j] == '0')
            {
                if(x[x.length() - 1 - j] != '0')
                {
                    valid = false;
                    break;
                }
            }
            else if(x[j] == '1')
            {
                if(x[x.length() - 1 - j] != '1')
                {
                    valid = false;
                    break;
                }
            }
            else if(x[j] == '8')
            {
                if(x[x.length() - 1 - j] != '8')
                {
                    valid = false;
                    break;
                }
            }
            else if(x[j] == '9')
            {
                if(x[x.length() - 1 - j] != '6')
                {
                    valid = false;
                    break;
                }
            }
            else
            {
                valid = false;
                break;
            }
        }
        if (valid == true)
        {
            counter++;
        }
    }
    cout << counter << '\n';    
}