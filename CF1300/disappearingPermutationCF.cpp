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
int cnt;
void dfs(int v){
    vis[v] = 1;
    cnt++;
    for(auto u:adjMat[v]){
        if(!vis[u]){
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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        clean(n);
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            adjMat[x].push_back(i);
            adjMat[i].push_back(x);
        }
        int ans = 0;
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            if(!vis[x]){
                cnt = 0;
                dfs(x);
                ans+=cnt;
            }
            cout<<ans<<" ";
        }
        cout<<endl;
    }
}