#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
// const int mx =2e5+123;
// int a[mx];
bool vis[1002] = {0};
vector<int> adjMat[1002];
int cnt[1002];
int dfs(int v){
    if(cnt[v]==2) return v;
    cnt[v]++;
    for(auto u:adjMat[v]){
           return dfs(u); 
    }
    return v;
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
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        adjMat[i].push_back(x);
    }
    for(int i=1;i<=n;i++){
        mem(cnt,0);
        int result = dfs(i);
        cout<<result<<" ";
    }

}