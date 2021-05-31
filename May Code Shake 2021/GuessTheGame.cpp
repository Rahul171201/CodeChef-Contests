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
    map<ll, string> m1;
    map<string, ll> m2;
    m1.insert({0, "Monday"});
    m2.insert({"Monday", 0});
    m1.insert({1, "Tuesday"});
    m2.insert({"Tuesday", 1});
    m1.insert({2, "Wednesday"});
    m2.insert({"Wednesday", 2});
    m1.insert({3, "Thursday"});
    m2.insert({"Thursday", 3});
    m1.insert({4, "Friday"});
    m2.insert({"Friday", 4});
    m1.insert({5, "Saturday"});
    m2.insert({"Saturday", 5});
    m1.insert({6, "Sunday"});
    m2.insert({"Sunday", 6});
    while (t--)
    {
        string day = "Monday";
        ll n;
        cin >> n;

        auto current = m2.find(day);

        n = (n % 7);
        ll ans = (current->second + n) % 7;
        ans = (ans+6)%7;
        auto q = m1.find(ans);
        cout << q->second << "\n";
    }
}