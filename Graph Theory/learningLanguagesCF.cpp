#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =123;
bool vis[mx] = {0};
bool exist[mx]  = {0};
vector<int> adjMat[mx];

void dfs(int n){
    vis[n]=1;
    for(auto u: adjMat[n]){
        if(!vis[u]){
            dfs(u);
        }
    }
}

int main() {
    optimize();
    int n,m,zero=0,ans=0,a,b,k;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        
        cin>>k;
        if(k>0) {
            cin>>a;
            exist[a]=1;
        }
        else{
            zero++;
            ans++;
        }
        for(int j=1;j<k;j++){
            cin>>b;
            exist[b]=1;
            adjMat[a].push_back(b);
            adjMat[b].push_back(a);
            a = b;
        }
    }
    for(int i=1;i<=m;i++){
        if(!vis[i] && exist[i]){
            ans++;
            dfs(i);
        }
    }
    if(zero!=n) cout<<ans-1<<endl;
    else cout<<zero<<endl;
    
    
}