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

        ll digits = 0;
        ll temp = n;
        while (temp > 0)
        {
            digits++;
            temp = temp / 10;
        }

        ll ans = (digits - 1) * 9;
        ll num = pow(10, digits - 1);
        string s = to_string(num);
        for (ll i = 0; i < s.size(); i++)
        {
            s[i] = '1';
        }
        num = stoi(s);
        bool flag = true;
        while (num <= n && flag)
        {
            ans++;
            string s = to_string(num);
            for (ll i = 0; i < s.size(); i++)
            {
                ll c = s[i] - '0';
                if (c == 9)
                {
                    flag = false;
                    break;
                }
                c++;
                char ch = char(c + 48);
                s[i] = ch;
            }
            num = stoi(s);
        }

        ans = n-ans;
        cout << ans << "\n";
    }
}