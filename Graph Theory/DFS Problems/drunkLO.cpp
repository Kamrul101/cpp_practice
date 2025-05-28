#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

const int mx =1e5+123;
// bool vis[mx] = {0};
map<string,vector<string>> adjMat;
bool cycleFound = false;
// int cycleStart, cycleEnd;
map<string,int> col;
map<string,string> parent;


void dfs(string v){
    col[v] = 1;
    for(auto u:adjMat[v]){
        if(col[u]==0){
            dfs(u);
        }
        else if(col[u]==1){
            cycleFound = true;
            return;
        }
    }
    col[v] = 2;
}

// void clean(int n){
//     for(int i = 1; i <= n; i++){
//         adjMat[i].clear();
//         vis[i] = false;
//     }
// }


int main() {
    optimize();
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++){
        int n;
        cin>>n;
        adjMat.clear();
        col.clear();
        cycleFound = false;
        for(int i=1;i<=n;i++){
            string x , y;
            cin>>x>>y;
            adjMat[x].push_back(y);
            col[x] = col[y] = 0;
        }
        for(auto u:adjMat){
            string i = u.first;
            if(col[i]==0 && !cycleFound){
                dfs(i);
            }
        }
        if(cycleFound) {
            cout<<"Case "<<tc<<": No"<<endl;
            
        }
        else cout<<"Case "<<tc<<": Yes"<<endl; 
    }
}