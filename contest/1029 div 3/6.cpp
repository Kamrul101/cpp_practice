#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
vector<ll> adj[mx],lens;
ll power[mx];
ll lca = -1;
void dfs(ll v, ll par, ll len){
    if(adj[v].size()>2) lca = len;
    bool leaf = true;
    for(auto u:adj[v]){
        if(u!=par){
            dfs(u,v,len+1);
            leaf = false;
        }
    }
    if(leaf) lens.push_back(len);
}

void clean(int n){
    for(int i = 1; i <= n; i++){
        adj[i].clear();
    }
    lens.clear();
    lca=-1;
}

int main() {
    optimize();
    int t;
    cin>>t;
    power[0] = 1;
    for(int i=1;i<mx;i++) power[i] = (2*power[i-1])%MOD;
    while(t--){

        int n;
        cin>>n;
        clean(n);

        for(int i=0;i<n-1;i++){
            int x,y;
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }

        adj[1].push_back(0);

        dfs(1,0,1);

        if(lens.size()>2) cout<<0<<endl;
        else if(lens.size()==1){
            cout<<power[n]<<endl;
        }
        else{
            int diff = abs(lens[0]-lens[1]);
            int x = diff + lca;
            if(diff){
                cout<<(power[x]+power[x-1])%MOD<<endl;
            }
            else{
                cout<<(2*power[x])%MOD<<endl;
            }
        }

    }
    
}