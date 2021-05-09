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

        vector<vector<char>> v(3, vector<char>(3, 'O'));
        ll totalx = 0, totalo = 0, vx = 0, vo = 0, draw = 0;
        for (ll i = 0; i < 3; i++)
        {
            string s;
            cin >> s;
            for (ll j = 0; j < s.size(); j++)
            {
                v[i][j] = s[j];
                if (v[i][j] == 'X')
                {
                    totalx++;
                }
                else if (v[i][j] == 'O')
                {
                    totalo++;
                }
                else
                {
                    draw++;
                }
            }
        }

        bool x = false, o = false;

        // row wise check
        for (ll i = 0; i < 3; i++)
        {
            ll countx = 0, counto = 0;
            for (ll j = 0; j < 3; j++)
            {
                if (v[i][j] == 'X')
                {
                    countx++;
                }
                else if (v[i][j] == 'O')
                {
                    counto++;
                }
            }

            if (countx == 3)
            {
                x = true;
                vx++;
            }
            if (counto == 3)
            {
                o = true;
                vo++;
            }
        }

        // column wise check
        for (ll i = 0; i < 3; i++)
        {
            ll countx = 0, counto = 0;
            for (ll j = 0; j < 3; j++)
            {
                if (v[j][i] == 'X')
                {
                    countx++;
                }
                else if (v[j][i] == 'O')
                {
                    counto++;
                }
            }

            if (countx == 3)
            {
                x = true;
                vx++;
            }
            if (counto == 3)
            {
                o = true;
                vo++;
            }
        }

        //main diagonal  check
        ll counterx = 0, countero = 0;
        for (ll i = 0; i < 3; i++)
        {

            if (v[i][i] == 'X')
            {
                counterx++;
            }
            else if (v[i][i] == 'O')
            {
                countero++;
            }
        }

        if (counterx == 3)
        {
            x = true;
            vx++;
        }
        if (countero == 3)
        {
            o = true;
            vo++;
        }

        // cross diagonal check
        ll countex = 0, counteo = 0;
        for (ll i = 0; i < 3; i++)
        {

            if (v[i][2 - i] == 'X')
            {
                countex++;
            }
            else if (v[i][2 - i] == 'O')
            {
                counteo++;
            }
        }
        if (countex == 3)
        {
            x = true;
            vx++;
        }
        if (counteo == 3)
        {
            o = true;
            vo++;
        }

        if ((x == true && o == true) || (totalx > totalo + 1) || (totalo > totalx) || (x==true && (totalx==totalo)) ||(o==true &&(totalx>totalo)))
        {
            cout << 3 << "\n";
        }
        else if (x == true || o == true ||(draw==0))
        {
            cout << 1 << "\n";
        }
        else
        {
            cout << 2 << "\n";
        }
    }
}
