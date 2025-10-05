#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

const int mx =2e5+123;
bool vis[mx] = {0};
vector<int> adjMat[mx];
vector<int> topological_order;


void dfs(int v){
    vis[v] = 1;
    for(auto u:adjMat[v]){
        if(!vis[u]){
            dfs(u);
        }
    }
    topological_order.push_back(v);
}

void clean(int n){
    for(int i = 1; i <= n; i++){
        adjMat[i].clear();
        vis[i] = false;
    }
}


int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=1;i<n;i++){
            int u,v,x , y;
            cin>>u>>v>>x>>y;
            if(x>y)adjMat[v].push_back(u);
            else adjMat[u].push_back(v);
        }
        for(int i=1;i<=n;i++){
            if(!vis[i]){
                dfs(i);
            }
        }
        reverse(topological_order.begin(),topological_order.end());
        vector<int> ans(n+1,0);
        int x = 0;
        for(auto u:topological_order) {
            ans[u] = x+1; 
            x++;
        }
        for(int i=1;i<=n;i++) cout<<ans[i]<<" ";
        cout<<endl;
        topological_order.clear();
        clean(n);
    }
}