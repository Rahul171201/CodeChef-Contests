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
    vector<ll> ans(n, 0);
    vector<ll> pre(n, 0);
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        ans[i] = x;
        if (i == 0)
        {
            pre[i] = x;
        }
        else
        {
            pre[i] = pre[i - 1] + x;
        }
    }

    ll mini = INT_MAX, sum = pre[n - 1];
    for (ll i = 0; i < n-1; i++)
    {
        ll temp = sum - pre[i];
        // cout<<pre[i]<<" "<<temp<<"\n";
        temp = temp - pre[i];
        if (abs(temp) < mini)
        {
            mini = abs(temp);
        }
    }
    cout << mini << "\n";
}