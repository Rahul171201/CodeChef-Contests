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

        ll n, q;
        cin >> n >> q;

        vector<ll> freq(32, 0), A(n + 1, 0);
        ll ans;
        for (ll i = 1; i <= n; i++)
        {
            ll x;
            cin >> x;
            A[i] = x;
            if (i == 1)
            {
                ans = A[i];
            }
            else
            {
                ans = ans | A[i];
            }
        }

        for (ll i = 1; i <= n; i++)
        {
            string s = bitset<32>(A[i]).to_string();
            for (ll i = 0; i < 32; i++)
            {
                if (s[i] == '1')
                {
                    freq[i]++;
                }
            }
        }

        cout << ans << "\n";
        while (q--)
        {
            ll x, v;
            cin >> x >> v;

            string final_ans = bitset<32>(ans).to_string();
            string temp = bitset<32>(A[x]).to_string();
            string final_temp = bitset<32>(v).to_string();

            A[x] = v;

            for (ll i = 0; i < 32; i++)
            {
                if (temp[i] == '1')
                {
                    if (freq[i] == 1)
                    {
                        final_ans[i] = '0';
                    }
                    freq[i]--;
                }
            }

            for (ll i = 0; i < 32; i++)
            {
                if (final_temp[i] == '1')
                {
                    final_ans[i] = '1';
                    freq[i]++;
                }
            }

            ans = stoi(final_ans, 0, 2);
            cout << ans << "\n";
        }
    }
}