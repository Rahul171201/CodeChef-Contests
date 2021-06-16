#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define ll long long int

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll x, y;
    cin >> x >> y;

    ll counter = 0;
    ll temp = 1;
    while (temp < y)
    {
        temp = (temp - 1) + x;
        counter++;
    }
    cout << counter << "\n";
}