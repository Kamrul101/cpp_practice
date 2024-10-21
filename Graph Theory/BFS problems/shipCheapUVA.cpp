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
map<string,vector<string>> adj;
map<string,int> lev;
map<string,string> par;

void bfs(string s){
    lev.clear();
    lev[s]=1;
    queue<string>q;
    q.push(s);
    while(!q.empty()){
        string u = q.front();
        q.pop();
        for(auto v: adj[u]){
            if(!lev[v]){
                lev[v] = lev[u]+1;
                par[v] = u;
                q.push(v);
            }
        }
    }
}

int main() {
    optimize();
    int n;
    bool yes = 0;
    while(cin>>n){
        // if(n==0) break;
        if(yes) cout<<endl;
        yes = 1;
        adj.clear();
        par.clear();
        for(int i=0;i<n;i++){
            string x,y;
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        string s,t;
        cin>>s>>t;
        bfs(s);
        if(lev[t]==0) cout<<"No route"<<endl;
        else{
            vector<pair<string,string>>v;
            while(!par[t].empty()){
                v.push_back({par[t],t});
                t=par[t];
            }
            reverse(v.begin(),v.end());
            for(auto u:v){
                cout<<u.first<<" "<<u.second<<endl;
            }
        
        }
        

    }
    
}