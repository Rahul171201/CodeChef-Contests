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

        ll temp = n / 4;
        ll ans;

        if (n % 4 == 0)
        {
            ans = 44 * temp + 16;
        }
        else
        {
            if (temp < 1)
            {
                if (n % 4 == 1)
                {
                    ans = 20;
                }
                else if (n % 4 == 2)
                {
                    ans = 36;
                }
                else
                {
                    ans = 51;
                }
            }
            else
            {
                ans = 44 * temp + 16;
                if (n % 4 == 1)
                {
                    ans = ans + 16;
                }
                else if (n % 4 == 2)
                {
                    ans = ans + 28;
                }
                else
                {
                    ans = ans + 39;
                }
            }
        }

        cout << ans << "\n";
    }
}