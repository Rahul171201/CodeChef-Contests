#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define ll long long int

bool isAnagram(vector<ll> freqA, vector<ll> freqB)
{
    bool flag = true;
    for (ll i = 1; i <= 26; i++)
    {
        if (freqA[i] != freqB[i])
        {
            flag = false;
            break;
        }
    }

    return flag;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;

        vector<ll> freqA(27, 0), freqB(27, 0);
        for (ll i = 0; i < n; i++)
        {
            ll ch = int(a[i]) - 96;
            freqA[ch]++;
        }
        for (ll i = 0; i < m; i++)
        {
            ll ch = int(b[i]) - 96;
            freqB[ch]++;
        }

        vector<ll> tempF(27,0);
        for(ll i=0;i<m;i++){
            ll ch = int(a[i]) - 96;
            tempF[ch]++;
        }
        

        ll counter=0;
        if(isAnagram(tempF, freqB)){
            counter++;
        }
        for (ll i = 0; i < n - m; i++)
        {
            ll prev = int(a[i]) - 96;
            ll next = int(a[i + m]) - 96;
            tempF[prev]--;
            tempF[next]++;
            if (isAnagram(tempF, freqB))
            {
                counter++;
            }
        }

        cout << counter << "\n";
    }
}