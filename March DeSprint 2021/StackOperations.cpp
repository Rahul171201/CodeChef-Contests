#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long int n, k;
    cin >> n >> k;

    long long int A[n];
    for (long long int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    if (n == 1)
    {
        if(k%2==1){
            cout<<-1;
        }
        else{
            cout<<A[0];
        }
    }
    else
    {
        if (k <= n)
        {
            vector<long long int> v;
            for (long long int i = 0; i < k; i++)
            {
                v.push_back(A[i]);
            }
            sort(v.begin(), v.end());
            cout << v[k - 1];
        }
        else
        {
            sort(A, A + n);
            cout << A[n - 1];
        }
    }

    for (long long int i = 0; i < n; i++)
    {
    }
}