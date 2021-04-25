#include<bits/stdc++.h>
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
        ll n, k;
        cin >> n >> k;

        for (ll i = 1; i <= n; i++)
        {
            for (ll j = 1; j <= k; j++)
            {
                char c = ((i + (j - 1)) % 26) + 96;
                if (int(c) == 96)
                {
                    cout << "z"
                         << " ";
                }
                else
                {
                    cout << c << " ";
                }
            }
            cout << "\n";
        }
    }
}