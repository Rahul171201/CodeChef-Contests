#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define ll long long int

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;

    for (ll i = 1; i <= 10; i++)
    {
        if (i != 10)
            cout << n * i << " -> ";
        else
            cout << n * i<<"\n";
    }
}