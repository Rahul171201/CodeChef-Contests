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
    m1.insert({0, "monday"});
    m2.insert({"monday", 0});
    m1.insert({1, "tuesday"});
    m2.insert({"tuesday", 1});
    m1.insert({2, "wednesday"});
    m2.insert({"wednesday", 2});
    m1.insert({3, "thursday"});
    m2.insert({"thursday", 3});
    m1.insert({4, "friday"});
    m2.insert({"friday", 4});
    m1.insert({5, "saturday"});
    m2.insert({"saturday", 5});
    m1.insert({6, "sunday"});
    m2.insert({"sunday", 6});
    while (t--)
    {
        string day;
        cin >> day;
        ll n;
        cin >> n;

        auto current = m2.find(day);

        n = (n % 7);
        ll ans = (current->second + n) % 7;
        auto q = m1.find(ans);
        cout << q->second << "\n";
    }
}