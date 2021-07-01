#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define ll long long int

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;

    ll counter = 0;
    while (n != 1)
    {

        if (n % 2 == 0)
        {
            n = n / 2;
        }
        else
        {
            counter++;
            n = n - 1;
        }
    }
    cout << counter+1 << "\n";
}
