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
    vector<char> v(s.size());

    for (ll i = 0; i < s.size(); i++)
    {
        v[i] = s[i];
    }

    vector<ll> ans;
    ll count = 1;
    ll flag = 0;
    bool dec = false;
    for (ll i = 0; i < s.size(); i++)
    {
        if (v[i] == '<')
        {
            if (flag == 1 || flag == 0)
            {
                count++;
                flag = 1;
            }
            else
            {
                ans.push_back(count);
                flag = 1;
                count = 2;
            }
        }
        else
        {
            if (flag == 0)
                dec = true;
            if (flag == 2 || flag == 0)
            {
                count++;
                flag = 2;
            }
            else
            {
                ans.push_back(count);
                count = 2;
                flag = 2;
            }
        }
    }
    ans.push_back(count);
    // for (ll i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << "\n";
    // }

    ll finalval = 0;

    if (dec)
    {
        finalval = finalval + (ans[0] * (ans[0] + 1)) / 2;

        for (auto i = 1; i < ans.size(); i++)
        {
            if (i + 1 < ans.size())
            {
                if (ans[i] < ans[i + 1])
                {
                    finalval = finalval + (ans[i] * (ans[i] + 1)) / 2;
                    finalval = finalval - ans[i] - 1;
                    finalval = finalval + (ans[i + 1] * (ans[i + 1] + 1)) / 2;
                    i++;
                }
                else
                {
                    finalval = finalval + (ans[i] * (ans[i] + 1)) / 2;
                    if (i != 0)
                        finalval = finalval - ans[i + 1] - 1;
                    else
                        finalval = finalval - ans[i + 1];
                    finalval = finalval + (ans[i + 1] * (ans[i + 1] + 1)) / 2;
                    i++;
                }
            }
            else
            {
                finalval = finalval + (ans[i] * (ans[i] + 1)) / 2;
                finalval = finalval - 1;
            }
        }
        finalval = finalval - s.size() - 1;
        cout << finalval << "\n";
    }
    else
    {
        for (auto i = 0; i < ans.size(); i++)
        {
            if (i + 1 < ans.size())
            {
                if (ans[i] < ans[i + 1])
                {
                    finalval = finalval + (ans[i] * (ans[i] + 1)) / 2;
                    if (i != 0)
                        finalval = finalval - ans[i] - 1;
                    else
                        finalval = finalval - ans[i];
                    finalval = finalval + (ans[i + 1] * (ans[i + 1] + 1)) / 2;
                    i++;
                }
                else
                {
                    finalval = finalval + (ans[i] * (ans[i] + 1)) / 2;
                    if (i != 0)
                        finalval = finalval - ans[i + 1] - 1;
                    else
                        finalval = finalval - ans[i + 1];
                    finalval = finalval + (ans[i + 1] * (ans[i + 1] + 1)) / 2;
                    i++;
                }
                // cout << finalval << "\n";
            }
            else
            {
                finalval = finalval + (ans[i] * (ans[i] + 1)) / 2;
                finalval = finalval - 1;
            }
        }
        finalval = finalval - s.size() - 1;
        cout << finalval << "\n";
    }
}