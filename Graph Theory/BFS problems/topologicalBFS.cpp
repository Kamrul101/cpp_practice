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
int inDegree[mx];


int main() {
    optimize();
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        int x , y;
        cin>>x>>y;
        adjMat[x].push_back(y);
        inDegree[y]++;
    }
    queue<int> q;
    for(int i=1;i<=n;i++){
        if(!inDegree[i]){
            q.push(i);
        }
    }
    vector<int> topological_order;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        topological_order.push_back(u);
        for(auto v:adjMat[u]){
            inDegree[v]--;
            if(!inDegree[v]){
                q.push(v);
            }
        }
    }
    if(topological_order.size()!=n){
        cout<<"IMPOSSIBLE"<<endl;
    }
    else{
        for(auto u:topological_order){
            cout<<u<<" ";
        }
        cout<<endl;
    }
     
}