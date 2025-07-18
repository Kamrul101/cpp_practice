#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =1e5+123;
// int a[mx];
vector<int> adj[mx];
int cnt[2];

void dfs(int v,int c,int par){
    cnt[c]++;
    for(auto u:adj[v]){
        if(u!=par){
            dfs(u,!c,v);
        }
        
    }
}
int main() {
    optimize();
    int n;
    cin>>n;
    map<int,int>mp;
    for(int i=1;i<n;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    dfs(1,0,0);
    ll x=(1LL*cnt[0]*cnt[1])-n+1;
    cout<<x<<endl;
    
    
}