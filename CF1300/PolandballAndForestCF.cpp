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

int cnt =0;

void dfs(int v){
    vis[v] = 1;
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
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        adjMat[x].push_back(i);
        adjMat[i].push_back(x);
    }
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            cnt++;
            dfs(i);
        }
    }
    cout<<cnt<<endl;   
}