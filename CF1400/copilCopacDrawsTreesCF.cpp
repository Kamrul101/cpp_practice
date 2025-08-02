#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
// int a[mx];

vector<vector<int>> adj;
map<pair<int,int>,int>mp;
vector<int> dp;

void dfs(int u, int p){
    for(auto v: adj[u]){
        if(v==p) continue;
        if(mp[{p,u}]<mp[{u,v}]){
            dp[v] = dp[u];
        }
        else dp[v] = 1 + dp[u];
        dfs(v,u);
    }
}

int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        dp.assign(n,0);
        mp.clear();
        adj.assign(n,vector<int>());
        for(int i=0;i<n-1;i++){
            int x,y;
            cin>>x>>y;
            x--,y--;
            adj[x].push_back(y);
            adj[y].push_back(x);
            mp[{x,y}] = i;
            mp[{y,x}] = i;
        }
        mp[{-1,0}] = -1;
        dp[0] = 1;
        dfs(0,-1);
        int mx = -1;
        mx = *max_element(dp.begin(),dp.end());
        cout<<mx<<endl;
        
    }
    
}