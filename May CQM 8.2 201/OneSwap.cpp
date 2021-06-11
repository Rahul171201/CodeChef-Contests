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
        string s;
        cin >> s;

        set<pair<ll, ll>> S;
        for (ll i = 0; i < s.size(); i++)
        {
            ll c = s[i] - '0';
            S.insert({s[i], i});
        }

        ll counter = 0;
        for (auto it = S.rbegin(); it != S.rend(); it++)
        {

            if (it->first != s[counter])
            {
                char temp = s[counter];
                s[counter] = s[it->second];
                s[it->second] = temp;
                break;
            }
            counter++;
        }

        cout << s << "\n";
    }
}