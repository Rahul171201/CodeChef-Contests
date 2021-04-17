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
        ll n = s.size();

        vector<ll> max_len(n, 0);
        vector<ll> next_zero(n, 0);
        vector<ll> next_one(n, 0);
        vector<ll> v;
        ll count = 0;

        for (ll i = n - 1; i > 0; i--)
        {
            if (i == 1)
            {
                max_len[0] = count;
            }

            if (s[i] == '1')
            {

                if (s[i - 1] == '0')
                {
                    max_len[i] = count;
                    max_len[i - 1] = count;
                    count++;
                    i--;
                }
                else
                {
                    max_len[i] = count;
                }
            }
            else
            {
                if (s[i - 1] == '1')
                {
                    max_len[i] = count;
                    max_len[i - 1] = count;
                    count++;
                    i--;
                }
                else
                {
                    max_len[i] = count;
                }
            }
        }

        ll index_zero = -1;
        ll index_one = -1;
        ll count_of_one = 0, count_of_zero = 0;
        for (ll i = n - 1; i >= 0; i--)
        {
            if (s[i] == '1')
            {
                count_of_one++;
                next_zero[i] = index_zero;
                next_one[i] = index_one;
                index_one = i;
            }
            else
            {
                count_of_zero++;
                next_zero[i] = index_zero;
                next_one[i] = index_one;
                index_zero = i;
            }
        }

        ll count1 = -1;
        for (ll i = 0; i < n; i++)
        {
            if (count1 == -1)
            {
                if (s[i] == '1')
                {
                    count1 = i;
                    v.push_back(1);
                    i--;
                }
            }
            else
            {
                ll zero = next_zero[i];
                ll one = next_one[i];

                if (zero == -1)
                {
                    v.push_back(0);
                    break;
                }
                if (one == -1)
                {
                    v.push_back(1);
                    break;
                }

                if (max_len[zero] > max_len[one])
                {
                    v.push_back(1);
                    i = one;
                    i--;
                }
                else
                {
                    v.push_back(0);
                    i = zero;
                    i--;
                }
            }
        }

        if (count_of_zero == 0)
        {
            cout << 0 << "\n";
        }
        else if (count_of_one == 0)
        {
            cout << 1 << "\n";
        }
        else
        {
            for (ll i = 0; i < v.size(); i++)
            {
                cout << v[i];
            }
            cout << "\n";
        }
    }
}