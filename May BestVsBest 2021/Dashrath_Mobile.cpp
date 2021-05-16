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
        string s;
        getline(cin, s);

        if (s.size() >= 4)
        {
            if (int(s[0]) >= 48 && int(s[0]) <= 57)
            {
                cout << 0 << "\n";
            }
            else
            {

                ll num = 0, capital = 0, slash = 0;
                for (ll i = 0; i < s.size(); i++)
                {
                    if (int(s[i]) >= 48 && int(s[i]) <= 57)
                    {
                        num++;
                    }
                    else if (int(s[i]) >= 65 && int(s[i]) <= 90)
                    {
                        capital++;
                    }
                    else if (s[i] == ' ' || s[i] == '/')
                    {
                        slash++;
                    }
                }

                if (num > 0 && capital > 0 && slash == 0)
                {
                    cout << 1 << "\n";
                }
                else
                {
                    cout << 0 << "\n";
                }
            }
        }
        else
        {
            cout << 0 << "\n";
        }
    }
}