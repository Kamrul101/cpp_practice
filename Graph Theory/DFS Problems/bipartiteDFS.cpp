#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

const int mx =1e5+123;
vector<int> adjMat[mx];
int col[mx];
bool is_possible = true;
void dfs(int v,int c){
    if(!is_possible) return;
    col[v] = c;
    for(auto u:adjMat[v]){
        if(col[u]==-1){
            dfs(u,3-c);
        }
        else if(col[v]==col[u]) {
                is_possible=false;
                return;
        }
        
    }
}

void clean(int n){
    for(int i = 1; i <= n; i++){
        adjMat[i].clear();
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
        adjMat[y].push_back(x);
    }
    mem(col,-1);
    for(int i=1;i<=n;i++){
        if(col[i]==-1){
            dfs(i,1);
        }
    }
    if(is_possible) {

        for(int i=1;i<=n;i++){
            cout<<col[i]<<" ";
        }
    }
    else cout<<"IMPOSSIBLE"<<endl;   
}