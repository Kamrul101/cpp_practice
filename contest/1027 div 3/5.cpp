#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

// const int mx =2e5+123;
// bool vis[mx] = {0};
vector<vector<ll>> adjMat;
vector<ll> a,v1,v2;


void dfs(ll v,ll p){
    v1[v] = a[v];
    v2[v] = a[v];
    if(p!=-1){
        v1[v] = max(v1[v],a[v]-v2[p]);
        v2[v] = min(v2[v],a[v]-v1[p]);
    }
    for(auto u:adjMat[v]){
        if(u!=p){
            dfs(u,v);
        }
    }
}

void clean(int n){
    for(int i = 1; i <= n; i++){
        adjMat[i].clear();
        // vis[i] = false;
    }
}


int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        a.resize(n+1);
        v1.resize(n+1);
        v2.resize(n+1);
        adjMat.assign(n+1,vector<ll>());
        for(int i=1;i<=n;i++) cin>>a[i];

        for(int i=0;i<n-1;i++){
            ll x , y;
            cin>>x>>y;
            adjMat[x].push_back(y);
            adjMat[y].push_back(x);
        }

        dfs(1,-1);
        for(int i=1;i<=n;i++){
            cout<<v1[i]<<" ";
        }
        cout<<endl;

    }
      
}