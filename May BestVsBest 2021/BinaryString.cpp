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
        cin >> s;

        vector<char> c;
        for (ll i = 0; i < s.size(); i++)
        {
            c.push_back(s[i]);
        }

        vector<char> ans1;
        for (ll i = 0; i < c.size(); i++)
        {
            if (c[i] == 'A')
            {
                ll temp = int(ans1.front() - '0') & int(c[i + 1] - '0');
                ans1.pop_back();
                char ch = '1';
                if (temp == 0)
                {
                    ch = '0';
                }
                ans1.push_back(ch);
                i++;
            }
            else if (c[i] == 'B')
            {
                ll temp = int(ans1.front() - '0') | int(c[i + 1] - '0');
                ans1.pop_back();
                char ch = '1';
                if (temp == 0)
                {
                    ch = '0';
                }
                ans1.push_back(ch);
                i++;
            }
            else if (c[i] == 'C')
            {
                ll temp = int(ans1.front() - '0') ^ int(c[i + 1] - '0');
                ans1.pop_back();
                char ch = '1';
                if (temp == 0)
                {
                    ch = '0';
                }
                ans1.push_back(ch);
                i++;
            }
            else
            {
                ans1.push_back(c[i]);
            }
        }


        cout << ans1.front() << "\n";
    }
}