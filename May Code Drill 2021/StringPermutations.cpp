#include <bits/stdc++.h>
using namespace std;
int print(string s, int i, int j, set<string> &val)
{

    if (i >s.size()-1)
    {
        return 0;
    }
    else
    {
        if (val.count(s) == 0)
        {
            val.insert(s);
        }

        for (int k = i; k <= j; k++)
        {

            char c = s[i];
            s[i] = s[k];
            s[k] = c;
            print(s, i + 1, j, val);
            c = s[i];
            s[i] = s[k];
            s[k] = c;
        }
    }
    return 0;
}
int main()
{
    string s;
    cin >> s;

    int n = s.size();
    set<string> val;
    val.insert(s);
    print(s,0,n-1,val);

    cout<<val.size()<<"\n";
    for(auto it : val){
        cout<<it<<"\n";
    }
}