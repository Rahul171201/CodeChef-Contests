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
        float k1, k2, k3, v;
        cin >> k1 >> k2 >> k3 >> v;
        float ans = k1 * k2 * k3 * v;
        ans = 100 / ans;
        float value = (int)(ans * 100 + .5);
        float final_ans = (float)value / 100;

        if (final_ans > 9.58 || (abs(final_ans - 9.58)< 1e-2))
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}