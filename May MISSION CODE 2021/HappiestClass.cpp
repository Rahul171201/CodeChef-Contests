#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define ll long long int

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, k;
    cin >> n >> k;
    map<ll, ll> m;
    for (ll i = 0; i < n * k; i++)
    {
        ll x;
        cin >> x;
        auto q = m.find(x);
        if (q == m.end())
        {
            m.insert({x, 1});
        }
        else
        {
            q->second++;
        }
    }

    map<ll, ll> students;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        auto q = students.find(x);
        if (q == students.end())
        {
            students.insert({x, 1});
        }
        else
        {
            q->second++;
        }
    }

    vector<ll> happiness;
    set<ll> indices;
    for (ll i = 0; i < k; i++)
    {
        ll x;
        cin >> x;
        happiness.push_back(x);
    }
    for (ll i = 0; i < k - 1; i++)
    {
        if (happiness[i + 1] - happiness[i] < k)
        {
            indices.insert(i);
        }
    }

    ll ans = 0;
    for (auto it : students)
    {
        ll totalneed = it.second * k;
        auto q = m.find(it.first);
        ll totalavailable = q->second;

        if (totalneed <= totalavailable)
        {
            ll initial = totalneed / k;
            ans = ans + initial * happiness[k - 1];
        }
        else
        {
            ll counter = 0;
            ll prev = -1;
            for (auto jt : indices)
            {
                counter = counter + (it.second * (jt - prev));
                if (counter < totalavailable)
                {
                    ans = ans + (it.second * happiness[jt]);
                    if (prev != -1)
                    {
                        ans = ans - (it.second * happiness[prev]);
                    }
                }
                else
                {
                    ll temp = counter - totalavailable;
                    
                    ans = ans - (it.second * happiness[jt]);
                    if (prev != -1)
                    {
                        ans = ans + (it.second * happiness[prev]);
                    }

                }
            }
        }
    }
}