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
        ll n;
        cin >> n;
        string s = bitset<64>(n).to_string();
        ll counter=0;

        for(ll i=0;i<s.size();i++){
            if(s[i]=='1'){
                counter++;
            }
        }
        counter = counter%2;
        ll len = log2(n) + 1;
        ll ans = (counter ^ len) % 2;
        cout << ans << "\n";
    }
}