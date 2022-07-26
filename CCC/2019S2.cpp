#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
  
    if (n % 2 == 0 || n % 3 == 0)
        return false;
  
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
  
    return true;
}
  

int main()
{
    map<int,bool> mem;
    int n,x;
    cin >> n;
    for (int i = 0; i < n; ++i)
     {
         cin >> x;
         int up = x;
         int low = x;
         if(x % 2 == 0)
         {
            up++;
            low--;
         }
         while(low > 0)
         {
            if(isPrime(up) && isPrime(low))
            {
                cout << up << " " << low << '\n';
                break;
            }
            up += 2;
            low -= 2;
         }
     } 
}