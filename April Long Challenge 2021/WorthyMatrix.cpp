#include <bits/stdc++.h>
using namespace std;
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long int
#define all(x) (x).begin(), (x).end()
#define foit(c, itr) for (__typeof((c).begin()) itr = (c).begin(); itr != (c).end(); itr++)
#define sqr(a) ((a) * (a))
#define mp make_pair
#define pb push_back
#define endl "\n"
#define fo(i, n) for (i = 0; i < n; i++)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl

vector<vector<ll>> prefixSum2D(vector<vector<ll>> mat, ll n, ll m)
{
    vector<vector<ll>> pref(n, vector<ll>(m, 0));
    pref[0][0] = mat[0][0];

    for (ll i = 1; i < m; i++)
        pref[0][i] = pref[0][i - 1] + mat[0][i];
    for (ll i = 1; i < n; i++)
        pref[i][0] = pref[i - 1][0] + mat[i][0];

    for (ll i = 1; i < n; i++)
    {
        for (ll j = 1; j < m; j++)

            pref[i][j] = pref[i - 1][j] + pref[i][j - 1] - pref[i - 1][j - 1] + mat[i][j];
    }

    return pref;
}

void solve()
{
    ll i, j, k;
    ll n, m;
    cin >> n >> m >> k;
    vector<vector<ll>> mat(n, vector<ll>(m, 0));
    fo(i, n) fo(j, m) cin >> mat[i][j];
    vector<vector<ll>> pref = prefixSum2D(mat, n, m);

    ll size = 1;
    ll ans = 0;
    for (size = 1; size <= n; size++)
    {
        ll start = n - 1;

        for (i = size - 1; i < n; i++)
        {

            for (j = size - 1; j < m; j++)
            {
                ll sum = pref[i][j];
                if (i - size >= 0)
                {
                    sum -= pref[i - size][j];
                    if (j - size >= 0)
                        sum += pref[i - size][j - size];
                }
                if (j - size >= 0)
                    sum -= pref[i][j - size];
        
                if (sum >= k * sqr(size))
                {
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;
}

int main()
{
    IOS;

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}