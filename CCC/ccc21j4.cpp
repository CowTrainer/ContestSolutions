#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
	int lc = 0, mc = 0, sc = 0;
    int la = 0, ma = 0, lm = 0, ml = 0;
    string books;
    cin >> books;
    for(int i = 0; i < books.length(); i++)
    {
        if(books[i] == 'L')
        {
            lc++;
        }
        else if(books[i] == 'M')
        {
            mc++;
        }
        else if (books[i] == 'S')
        {
            sc++;
        }
    }
    for(int i = 0; i < books.length(); i++)
    {
        if(books[i] != 'L' && i < lc)
        {
            la++;
        }
        else if(books[i] != 'M' && i > lc && i < lc + mc)
        {
            ma++;
        }
        if(books[i] == 'M' && i < lc)
        {
            lm++;
        }
        else if(books[i] == 'L' && i > lc && i < lc + mc)
        {
            ml++;
        }
    }
    cout << (la + ma + min(lm,ml));
    
}