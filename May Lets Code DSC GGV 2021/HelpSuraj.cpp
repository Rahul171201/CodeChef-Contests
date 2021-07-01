#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define ll long long int

vector<bool> SieveOfEratosthenes(int n)
{

    vector<bool> prime(n + 1, true);

    for (int p = 2; p * p <= n; p++)
    {

        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    return prime;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<bool> prime = SieveOfEratosthenes(1e6 + 1);
    ll counter = 0;
    ll n;
    cin >> n;
    for (ll i = 2; i <= n; i++)
    {
        if (prime[i])
        {
            counter++;
        }
    }
    cout << counter << "\n";
}