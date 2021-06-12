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

        bool flag = false;
        for (ll i = 0; i < n; i++)
        {
            string s;
            cin >> s;

            bool temp1 = false;
            bool temp2 = false;

            for (ll i = 0; i < s.size(); i++)
            {
                ll c = int(s[i]);

                if ((c >= 65 && c <= 77) || (c >= 110 && c <= 122))
                {
                    flag = true;
                    break;
                }

                else if (c >= 97 && c <= 109)
                {
                    temp1 = true;
                }
                else
                {
                    temp2 = true;
                }

                if (temp1 == true && temp2 == true)
                {
                    flag = true;
                    break;
                }
            }
        }

        if (flag)
        {
            cout << "NO"
                 << "\n";
        }
        else
        {
            cout << "YES"
                 << "\n";
        }
    }
}