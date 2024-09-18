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
bool vis[mx] = {0};
vector<int> adjMat[mx];
void dfs(int n){
    vis[n] = 1;
    for(auto u:adjMat[n]){
        if(!vis[u]){
            dfs(u);
        }
    }
}
int main() {
    optimize();
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        int x , y;
        cin>>x>>y;
        adjMat[x].push_back(y);
        adjMat[y].push_back(x); //for directed edges remove this line
    }
    for(int i=1;i<=n;i++){
        cout<<i<<": ";
        for(auto u:adjMat[i]){
            cout<<" "<<u; 
        }
        cout<<endl;
    }
    
}