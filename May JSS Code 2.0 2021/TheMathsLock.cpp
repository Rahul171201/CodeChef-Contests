#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define ll long long int

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll b;
    cin >> b;
    b = b / 9;

    ll digit = 0;
    while (b > 0)
    {
        if (b / 10 == 0)
        {
            digit = b % 10;
        }
        b = b / 10;
    }

    cout << 9 - digit << "\n";
}