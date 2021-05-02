#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define ll long long int

long long int power(long long int x, long long int y)
{
    long long int temp;
    if (y == 0)
        return 1;
    temp = (power(x, y / 2)) % 1000000007;
    if (y % 2 == 0)
        return (temp * temp) % 1000000007;
    else
        return (((x * temp) % 1000000007) * temp) % 1000000007;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t=1;
    while (t--)
    {
        ll x, k;
        cin >> x >> k;
        k = k+1;
        x = x%mod;

        ll term1 = (power(2, 2 * k - 1) * x)%mod;
        ll term2 = power(2, 2 * k - 2);
        ll term3 = power(2, k - 1);
        ll num = (term1 - term2 - term3)%mod;
        if(num<0){
            num+=mod;
        }
        ll den = power(2, k - 1);

        ll ans = (num / den);
        ans = (ans+2)%mod;
        cout << ans << "\n";
    }
}