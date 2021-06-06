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
    char x;
    cin >> x;
    ll y;
    cin >> y;

    bool flag = false;
    ll ans = 1, final_ans = 0;
    ll count = 0;
    set<ll> indices;
    for (ll i = 0; i < s.size(); i++)
    {

        if (s[i] == x)
        {
            count++;
            indices.insert(i);
        }

        if (count == y)
        {
            auto start = indices.begin();
            auto end = indices.end();
            end--;
            ans = ans * pow(2, *start);
            ans = ans * pow(2, s.size() - 1 - *end);
            final_ans = final_ans + ans;
            ans = 1;
            count--;
            indices.erase(*start);
        }
    }
    cout << final_ans << "\n";
}