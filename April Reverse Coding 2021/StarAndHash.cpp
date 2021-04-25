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

        for (ll i = 1; i <= n; i++)
        {
            string s = bitset<8>(i).to_string();
            ll len = log2(n) + 1;
            string temp = s.substr(8 - len, len);

            for (ll i = 1; i <= len; i++)
            {
                if (temp[i - 1] == '0')
                {
                    cout << "#";
                }
                else
                {
                    cout << "*";
                }
            }
            cout << "\n";
        }
    }
}