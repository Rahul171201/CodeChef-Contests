#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define ll long long int

ll counter;

ll dfs(vector<vector<ll>> &adj, vector<ll> &token, vector<ll> visited, ll root)
{
    for (auto it : adj[root])
    {
        if (visited[it] == 0)
        {
            visited[it] = 1;
            if (token[it] == 1)
            {
                counter++;
            }
            dfs(adj, token, visited, it);
        }
    }
}
ll dfs_helper(vector<vector<ll>> &adj, vector<ll> &num, ll root, vector<ll> &visited, vector<ll> &token)
{
    for (auto it : adj[root])
    {
        if (visited[it] == 0)
        {
            visited[it] = 1;
            counter = 0;
            dfs(adj, token, visited, it);
            num[it] = counter;
        }
    }
}

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
        string s;
        cin >> s;
        vector<ll> token(n + 1, 0);
        for (ll i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                token[i + 1] = 0;
            }
            else
            {
                token[i + 1] = 1;
            }
        }

        vector<ll> parent(n + 1, 0);
        vector<vector<ll>> adj(n + 1);
        for (ll i = 2; i <= n; i++)
        {
            ll c;
            cin >> c;
            parent[i] = c;
            adj[i].push_back(c);
            adj[c].push_back(i);
        }
        vector<ll> number_of_tokens_in_subtree(n + 1, 0);
        vector<ll> visited(n + 1, 0);
        visited[1] = 1;
        dfs_helper(adj, number_of_tokens_in_subtree, 1, visited, token);
        for (ll i = 2; i < n; i++)
        {
            visited[i] = 0;
        }
        counter = 0;
        dfs(adj, token, visited, 1);
        number_of_tokens_in_subtree[1] = counter;

        // for (ll i = 1; i <= n; i++)
        // {
        //     cout << number_of_tokens_in_subtree[i] << " ";
        // }
        // cout << "\n";
    }
}