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
        double a, b;
        cin >> a >> b;
        double perc_a = (a / 500) * 100;
        double perc_b = (b / 500) * 100;

        if (perc_a > perc_b)
        {
            cout << "A"
                 << "\n";
        }
        else
        {
            cout << "B"
                 << "\n";
        }
    }
}