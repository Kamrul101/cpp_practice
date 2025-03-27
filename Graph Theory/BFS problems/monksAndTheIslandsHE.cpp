#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx = 1e4+123;
// int a[mx];
int lev[mx];
vector<int> adjMat[mx];

void bfs(int s){
    mem(lev,-1);
    lev[s]=0;
    queue<int> q;
    q.push(s);
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(auto v:adjMat[u]){
            if(lev[v]==-1){
                lev[v] = lev[u]+1;
                q.push(v);
            }
        }
    }
}

int main() {
    optimize();
    for(int i=0;i<mx;i++) adjMat[i].clear();
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        for(int i=0;i<m;i++){
            int x,y;
            cin>>x>>y;
            adjMat[x].push_back(y);
            adjMat[y].push_back(x);
        }
        bfs(1);
        cout<<lev[n]<<endl;
    }
    
}