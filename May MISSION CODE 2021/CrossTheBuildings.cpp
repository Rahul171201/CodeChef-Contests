#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define ll long long int

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, m;
    cin >> n >> m;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v[i] = x;
    }

    queue<ll> q;
    ll current = 0;
    ll cur_height = v[current];
    for (ll i = 0; i < n - 1; i++)
    {
        // if (!q.empty())
        // {
        //     cout << "hmm : " << q.front() << "\n";
        // }
        // cout << "current node : " << current << " Currengt heioght : " << cur_height << " redblock: " << q.front() << " value of m: " << m << "\n";
        if (cur_height < v[i + 1])
        {
            ll temp = 0;
            if (!q.empty())
            {
                // cout << "lol"
                //      << "\n";
                temp = temp + q.front();
                q.pop();
            }

            if (temp + cur_height < v[i + 1])
            {
                ll dif = v[i + 1] - (cur_height + temp);
                if (m >= dif)
                {
                    m = m - dif;
                    current = i + 1;
                    cur_height = v[current];
                }
                else
                {
                    break;
                }
            }
            else if (temp + cur_height > v[i + 1])
            {
                ll dif = (cur_height + temp) - v[i + 1];
                q.push(dif);
                current = i + 1;
                cur_height = v[current];
            }
            else
            {
                current = i + 1;
                cur_height = v[current];
            }
        }
        else if (cur_height > v[i + 1])
        {
            if (!q.empty())
                q.pop();
            ll dif = cur_height - v[i + 1];
            q.push(dif);
            current = i + 1;
            cur_height = v[current];
            // cout << "Val of q : " << q.front() << "  ";
        }
        else
        {
            current = i + 1;
            cur_height = v[current];
        }
    }

    if (current == n - 1)
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