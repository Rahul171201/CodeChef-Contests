#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define ll long long int

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll x;
    cin >> x;
    ll sum = (x / 500) * 1000;
    x = x % 500;

    sum = sum + 5 * (x / 5);
    cout << sum << "\n";
}