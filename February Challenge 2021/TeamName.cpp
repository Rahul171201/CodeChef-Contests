#include <bits/stdc++.h>
using namespace std;
int CommonElements(set<char> s1, set<char> s2, int n){
        vector<int> v(n);
        vector<int>::iterator  it;
        it = set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), v.begin());
        return it - v.begin();
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,sum=0;
        cin>>n;

        map<string, set<char>> m;

        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            char c = s[0];
            s.erase(s.begin()+0);
            m[s].insert(c);
        }

        for(auto i : m){
            for(auto j : m){
                if(i.first != j.first){
                    int count = CommonElements(i.second, j.second, 26);
                    int cnt1 = i.second.size() - count;
                    int cnt2 = j.second.size() - count;
                    sum+=cnt1*cnt2;
                }
            }
        }

        cout<<sum<<"\n";
        m.clear();


    }
}