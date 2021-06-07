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
        ll x, y;
        cin >> x >> y;

        if (y % x == 0)
        {

            ll ans = INT_MAX;
            bool flag = false;
            y = y/x;
            for (ll i = 1; i <= 60; i++)
            {
                ll val = y + i;
                if(val&1){
                    continue;
                }
                string s = bitset<64>(val).to_string();
                ll counter = 0, sum=0;
                for (ll j = 0; j < 61; j++)
                {
                    if (s[63-j] == '1')
                    {
                        counter++;
                        sum = sum + j;
                    }
                }

                if (counter == i)
                {
                    flag = true;
                    ans = min(ans, sum + i - 1);
                }
            }

            if (flag)
            {
                cout << ans << "\n";
            }
            else
            {
                cout << -1 << "\n";
            }
        }
        else
        {
            cout << -1 << "\n";
        }
    }
}