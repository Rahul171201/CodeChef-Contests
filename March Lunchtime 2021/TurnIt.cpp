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
        ll u, v, a, s;
        cin >> u >> v >> a >> s;

        
        if (v >= u)
        {
            cout << "Yes" << endl;
        }
        else
        {
            ll temp = u * u;
            temp = temp - 2 * a * s;

            ll y = v * v;

            // cout<<ans<<" "<<y<<"\n";

            if (temp <= y)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
}