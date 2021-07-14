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
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<char> v(s.size() + 1, '0');
        for (ll i = 0; i < s.size(); i++)
        {
            v[i + 1] = s[i];
        }
        ll sum = 0;
        for (ll i = 1; i < s.size(); i++)
        {
            if (v[i] != v[i + 1])
            {
                sum = sum + 1;
            }
            else
            {
                sum = sum + 2;
            }
        }

        while (k--)
        {
            ll pos;
            cin >> pos;
            if (v[pos] == '0')
            {
                v[pos] = '1';
                if (pos - 1 > 0)
                {
                    if (v[pos] != v[pos - 1])
                    {
                        sum--;
                    }
                    else
                    {
                        sum++;
                    }
                }
                if (pos + 1 <= s.size())
                {
                    if (v[pos] != v[pos + 1])
                    {
                        sum--;
                    }
                    else
                    {
                        sum++;
                    }
                }
            }
            else
            {
                v[pos] = '0';
                if (pos - 1 > 0)
                {
                    if (v[pos] != v[pos - 1])
                    {
                        sum--;
                    }
                    else
                    {
                        sum++;
                    }
                }
                if (pos + 1 <= s.size())
                {
                    if (v[pos] != v[pos + 1])
                    {
                        sum--;
                    }
                    else
                    {
                        sum++;
                    }
                }
            }
            cout << sum << "\n";
        }
    }
}