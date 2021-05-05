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
        ll l;
        cin >> l;
        string s;
        cin >> s;

        ll count = 0;
        bool flag = false;
        for (ll i = 1; i <= l; i++)
        {
            if (s[i-1] == '1')
            {
                count++;
            }
            ll temp;
            if (i % 2 == 0)
            {
                temp = i / 2;
            }
            else
            {
                temp = (i / 2) + 1;
            }
            if (count >= temp)
            {
                flag = true;
                break;
            }
        }
        if (flag)
        {
            cout << "YES"
                 << "\n";
        }
        else
        {
            cout << "NO"
                 << "\n";
        }
    }
}