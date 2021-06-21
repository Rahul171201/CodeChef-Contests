#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define ll long long int

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    double a, b;
    cin >> a >> b;
    ll count = log2(b / a) + 1.0;
    cout << count << "\n";
}