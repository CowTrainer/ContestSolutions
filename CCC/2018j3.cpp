#include <bits/stdc++.h>

using namespace std;

int main() {
    int distance[4];
    int city[5];
    city[0] = 0;
    // Get input
    for(int i = 0; i < 4; i++)
    {
        cin >> distance[i];
        city[i+1] = city[i] + distance[i];
    }
    cout << abs(city[0]) << ' ' << abs(city[1]) << ' ' << abs(city[2]) << ' ' << abs(city[3]) << ' ' << abs(city[4]) << '\n';
    
    for(int i = 0; i < 4; i++)
    {
        city[0] -= distance[i];
        city[1] -= distance[i];
        city[2] -= distance[i];
        city[3] -= distance[i];
        city[4] -= distance[i];
        cout << abs(city[0]) << ' ' << abs(city[1]) << ' ' << abs(city[2]) << ' ' << abs(city[3]) << ' ' << abs(city[4]) << '\n';
    }
}