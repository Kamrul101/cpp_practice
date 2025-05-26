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
int level[mx]={0};
int ans[mx] = {0};

void dfs(int v){
    vis[v] = 1;
    for(auto u:adjMat[v]){
        if(!vis[u]){
            level[u]  = level[v]+1;
            dfs(u);
        }
    }
}

void clean(int n){
    for(int i = 1; i <= n; i++){
        adjMat[i].clear();
        vis[i] = false;
    }
}


int main() {
    optimize();
    int n;
    cin>>n;
    for(int i=1;i<n;i++){
        int x , y;
        cin>>x>>y;
        adjMat[x].push_back(y);
        adjMat[y].push_back(x);
    }
    dfs(1);
    int max_level = 0;
    int max_level_node = 1;
    for(int i=1;i<=n;i++){
        if(level[i]>max_level){
            max_level = level[i];
            max_level_node = i;
        }
    }

    int endPoint1 = max_level_node;
    
    mem(vis,0);
    level[endPoint1] = 0;
    
    dfs(max_level_node);
    max_level=0;
    
    int endPoint2=0;
    for(int i=1;i<=n;i++){
        if(level[i]>max_level){
            max_level = level[i];
            endPoint2 = i;
        }
    }

    for(int i = 1; i <= n; i++){
        ans[i] = level[i];
    }
    level[endPoint2] = 0;
    mem(vis,0);
    dfs(endPoint2);
    for(int i=1;i<=n;i++){
        cout<<max(ans[i],level[i])<<" ";
    }
    
}