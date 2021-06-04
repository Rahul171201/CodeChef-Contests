#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define ll long long int

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;
    vector<ll> v;
    set<ll> s;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        s.insert(x);
        v.push_back(x);
    }

    ll counter = 0;
    set<ll> temp;
    while (!s.empty())
    {
        counter++;
        auto q = s.begin();

        temp = s;
        for (auto it = temp.begin(); it != temp.end(); it++)
        {
            if (*it % *q == 0)
            {
                s.erase(*it);
            }
        }
    }

    cout << counter << "\n";
}