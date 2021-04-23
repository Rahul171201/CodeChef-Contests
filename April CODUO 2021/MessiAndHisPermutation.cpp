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

void solve()
{
    ll i, j, k;
    ll n, y;
    cin >> n >> y;
    if (y < n || y > ((n * (n + 1)) / 2))
    {
        cout << "-1\n";
        return;
    }
    y -= n;
    vector<ll> b(n, 1);
    vector<ll> c(n + 1, 0);
    vector<ll> ans(n, 0);
    fo(i, n)
    {
        k = min(y, n - i - 1);
        b[i] += k;
        y -= k;
        if (y == 0)
            break;
    }

    fo(i, n)
    {
        if (b[i] == 1)
            break;
        ans[i] = b[i];
        c[b[i]] = 1;
    }

    ans[i] = 1;
    i++;
    for (j = n; j >= 0; j--)
    {
        if (c[j] == 0)
        {
            if (i >= n)
                break;
            ans[i] = j;
            i++;
        }
    }
    fo(i, n) cout << ans[i] << " ";
    cout << endl;
}

int main()
{
    IOS;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}