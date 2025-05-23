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
int parent[mx];

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
                lvl[v] = lvl[u]+1;
                parent[v] = u;
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

    int src,dest;
    cin>>src>>dest;

    mem(lvl,-1);
    mem(parent,-1);

    bfs(src);
    //print path
    vector<int> path;
    while(dest!=-1){
        path.push_back(dest);
        dest = parent[dest];
    }
    reverse(path.begin(),path.end());
    for(auto u:path){
        cout<<u<<" ";
    }
    cout<<endl;
    
}