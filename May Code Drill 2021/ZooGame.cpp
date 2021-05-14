#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define ll long long int

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;
    ll z = 0, o = 0;

    for (ll i = 0; i < s.size(); i++)
    {
        if (s[i] == 'z')
        {
            z++;
        }
        else
        {
            o++;
        }
    }

    if (o == 2 * z)
    {
        cout << "Yes"
             << "\n";
    }
    else
    {
        cout << "No"
             << "\n";
    }
}