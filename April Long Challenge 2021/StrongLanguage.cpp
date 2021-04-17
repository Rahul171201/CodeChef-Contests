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
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        ll flag = 0, max = 0;

        for (ll i = 0; i < n; i++)
        {
            if (s[i] == '*')
            {
                flag++;
                if (flag > max)
                {
                    max = flag;
                }
            }
            else
            {
                flag = 0;
            }
        }

        if (max >= k)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}