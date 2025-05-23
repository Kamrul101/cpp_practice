#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =1005;
// int a[mx];
int lvl[mx];
bool vis[mx]={0};
vector<int> adjMat[mx];
int cnt=0;

int bfs(int s){
    queue<int> q;
    q.push(s);
    vis[s] = 1;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(auto v:adjMat[u]){
            if(!vis[v]){
                vis[v] =1;
                // lvl[v] = lvl[u]+1;
                q.push(v);
            }
        }
    }
}
int main() {
    optimize();
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        adjMat[x].push_back(y);
        adjMat[y].push_back(x);
    }
    mem(lvl,-1);
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            cnt++;
            bfs(i);
        }
    }
    cout<<cnt<<endl;
    
}