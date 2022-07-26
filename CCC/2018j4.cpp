#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,smallest,smallestx,smallesty;
    smallest = 100000000;
    scanf("%d", &n);
    int box[n][n];
    for(int i = 0; i < n; i++)
    {
        for(int k = 0; k < n; k++ )
        {
            scanf("%d", &box[i][k]);
            if (smallest > box[i][k])
            {
                smallest = box[i][k];
                smallesty = i;
                smallestx = k;
            }
        }
    }
    if(smallestx == 0 && smallesty == 0)
    {
        for(int i = 0; i < n; i++)
        {
            for(int k = 0; k < n; k++ )
            {
                printf("%d ", box[i][k]);
            }
            printf("\n");
        }
    }
    if(smallestx == (n-1) && smallesty == 0)
    {
        for(int i = n-1; -1 < i ; i--)
        {
            for(int k = 0; k < n; k++ )
            {
                printf("%d ", box[k][i]);
            }
            printf("\n");
        }
    }
    if(smallestx == (n-1) && smallesty == (n-1))
    {
        for(int i = (n-1); -1 < i; i--)
        {
            for(int k = (n-1); -1 < k; k--)
            {
                printf("%d ", box[i][k]);
            }
            printf("\n");
        }
    }
    if(smallestx == 0 && smallesty == (n-1))
    {
        for(int i = 0; i < n; i++)
        {
            for(int k = (n-1); -1 < k; k--)
            {
                printf("%d ", box[k][i]);
            }
            printf("\n");
        }
    }
    return 0;
}