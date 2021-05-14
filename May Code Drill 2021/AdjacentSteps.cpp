#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define ll long long int

ll fact(ll n)
{
    ll ans = 1;
    for (ll i = 2; i <= n; i++)
        ans = (ans * i)%mod;
    return ans;
}

ll nCr(ll n, ll r)
{
    ll temp1 = fact(n);
    ll temp2 = fact(n-r);
    ll temp3 = fact(r);
    ll ans = (temp1)/((temp2*temp3)%mod);
    return ans;
}

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
        cout<<4*n<<"\n";
    }
}