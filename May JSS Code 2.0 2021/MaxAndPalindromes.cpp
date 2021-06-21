#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define ll long long int

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;

    map<char, ll> m;
    set<char> S;

    for (ll i = 0; i < s.size(); i++)
    {
        if (S.count(s[i]) == 0)
        {
            S.insert(s[i]);
            m.insert({s[i], 1});
        }
        else
        {
            auto q = m.find(s[i]);
            q->second++;
        }
    }

    ll ans = 0;

    for (auto it : m)
    {
        if (it.second > 2)
        {
            ans = ans + S.size();
        }
        else if (it.second == 2)
        {
            ans = ans + (S.size() - 1);
        }
    }

    cout << ans << "\n";
}