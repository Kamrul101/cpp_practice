#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

const int mx =1e5+123;
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

int main() {
    optimize();
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        int x , y;
        cin>>x>>y;
        adjMat[x].push_back(y);
    }
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            dfs(i);
        }
    }
    reverse(topological_order.begin(),topological_order.end());

    int ans[n+2];
    int order[n+2];

    for(int i=1;i<=n;i++) ans[i] = INT_MIN;

    ans[n] = 1;
    for(int i=n-1;i>=0;i--){
        int u = topological_order[i];
        if(u==n) continue;

        int mx = INT_MIN,mx_node=0;
        for(auto v:adjMat[u]){
            if(ans[v]>mx){
                mx = ans[v];
                mx_node = v;
            }

        }
        ans[u] = mx+1;
        order[u] = mx_node;
    }
    if(ans[1]<0){
        cout<<"IMPOSSIBLE"<<endl;
    }
    else{
        int dest = 1;
        cout<<ans[1]<<endl;
        while(dest!=n){
            cout<<dest<<" ";
            dest = order[dest];
        }
        cout<<dest<<endl;

    }

}