#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define ll long long int

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        for (ll i = 1; i <= n; i = i + 2)
        {
            for (ll j = 1; j <= (n - i) / 2; j++)
            {
                cout << " ";
            }
            for (ll j = 1; j <= i; j++)
            {
                cout << "*";
            }
            for (ll j = 1; j <= (n - i) / 2; j++)
            {
                cout << " ";
            }
            cout << "\n";
        }
        for (ll i = n-2; i >0; i = i - 2)
        {
            for (ll j = 1; j <= (n - i) / 2; j++)
            {
                cout << " ";
            }
            for (ll j = 1; j <= i; j++)
            {
                cout << "*";
            }
            for (ll j = 1; j <= (n - i) / 2; j++)
            {
                cout << " ";
            }
            cout << "\n";
        }
        
    }
}