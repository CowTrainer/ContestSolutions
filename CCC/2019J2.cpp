#include <bits/stdc++.h>

using namespace std;

int main() {
    int a,temp;
    char b;
    scanf("%d", &a);
    for(int i=0;i<a;i++)
    {
        scanf("%d %c",&temp,&b);
        for(int k=0;k<temp;k++)
        {
            printf("%c", b);
        }
        printf("\n");
    }
    return 0;
}