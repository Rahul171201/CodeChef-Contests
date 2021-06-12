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
        ll n, m, k;
        cin >> n >> m >> k;

        set<ll> students, disqualified;
        for (ll i = 0; i < k; i++)
        {

            ll x;
            cin >> x;
            if (x >= 1 && x <= n)
            {
                if (students.count(x) == 0)
                {
                    students.insert(x);
                }
                else
                {
                    disqualified.insert(x);
                }
            }
        }

        cout << disqualified.size() << " ";
        for (auto it : disqualified)
        {
            cout << it << " ";
        }
        cout << "\n";
    }
}