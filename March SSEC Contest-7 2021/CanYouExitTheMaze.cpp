#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007
ll flag;
ll maze_trap(ll i, ll j, vector<vector<ll>> maze, ll n, vector<vector<ll>> visited)
{
    if(maze[i][j]==1){
        return 0;
    }
    else
    {
        visited[i][j] = 1;
        if (i == n - 1 && j == n - 1)
        {
            flag++;
            return 0;
        }
        if (i + 1 < n)
        {
            if(visited[i+1][j]==0)
            maze_trap(i+1,j,maze,n,visited);
        }
        if (i - 1 >= 0)
        {
            if(visited[i-1][j]==0)
            maze_trap(i-1,j,maze,n,visited);
        }
        if (j + 1 < n)
        {
            if(visited[i][j+1]==0)
            maze_trap(i,j+1,maze,n,visited);
        }
        if (j - 1 >= 0)
        {
            if(visited[i][j-1]==0)
            maze_trap(i,j-1,maze,n,visited);
        }
        visited[i][j]=0;
    }
}

int main()
{
    ll n = 6;
    vector<vector<ll>> maze(n, vector<ll>(n,0)), visited(n, vector<ll>(n,0));
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            ll x;
            cin>>x;
            maze[i][j] = x;
        }
    }
    flag=0;

    maze_trap(0,0,maze,n,visited); 

    if(flag==0){
        cout<<"No"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
    }
}