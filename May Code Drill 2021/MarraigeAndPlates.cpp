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
        ll a, b;
        cin >> a >> b;

        if ((2 * b - a) % 3 == 0)
        {
            ll x = (2*b - a)/3;
            ll y = b - 2*x;
            if(y>=0 && x>=0){
                cout<<"YES"<<"\n";
            }
            else{
                cout<<"NO"<<"\n";
            }
        }
        else
        {
            cout << "NO"
                 << "\n";
        }
    }
}