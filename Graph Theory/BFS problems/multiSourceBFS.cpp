#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =1005;

int lvl[mx];
bool vis[mx]={0};
vector<int> adjMat[mx];
int ans =  0;

int bfs(queue<int> &q){
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(auto v:adjMat[u]){
            if(!vis[v]){
                vis[v] = 1;
                q.push(v);
                lvl[v] = lvl[u]+1;
                ans = max(ans,lvl[v]);
            }
        }
    }
}
int main() {
    optimize();
    int n,m,k;
    cin>>n>>m>>k;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        adjMat[x].push_back(y);
        adjMat[y].push_back(x);
    }
    // take all sources to q as first node
    int source[k];
    for(int i=0;i<k;i++) cin>>source[i];

    mem(lvl,-1);
    queue<int> q;
    for(int i=0;i<k;i++){
        q.push(source[i]);
        vis[source[i]] = 1;
        lvl[source[i]] = 0;
    }
    bfs(q);
    for(int i=1;i<=n;i++){
        //min time to go per node through source
        cout<<i<<" "<<lvl[i]<<endl;
    }
    //min time to traverse whole graph
    cout<<ans<<endl;
    
}