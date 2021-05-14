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

        if ((n % 5 == 0) && (n % 15 == 0) && (n % 75 == 0))
        {
            cout << 3 << "\n";
        }
        else if ((n % 5 == 0 && n % 15 == 0) || (n % 15 == 0 && n % 75 == 0) || (n % 5 == 0 && n % 75 == 0))
        {
            cout << 2 << "\n";
        }
        else if ((n % 5 == 0) || (n % 15 == 0) || (n % 75 == 0))
        {
            cout << 1 << "\n";
        }
        else
        {
            cout << 0 << "\n";
        }
    }
}