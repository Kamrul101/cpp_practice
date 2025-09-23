#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

const int mx = 1e5+123;
int lev[mx];
vector<int> adjMat[mx];
int respect[mx];


int main() {
    optimize();

    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int x,y;
        cin>>x>>y;
        if(x==-1) x = 0;
        adjMat[x].push_back(i);
        adjMat[i].push_back(x);
        respect[i] = y; 
    }
    mem(lev,-1);
    lev[0]=0;
    queue<int> q;
    q.push(0);
    set<int> ans;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        bool check = false;
        if(respect[u]==1) check = true;
        for(auto v:adjMat[u]){
            if(lev[v]==-1){
                if(respect[v]==0) check = false;
                lev[v] = lev[u]+1;
                q.push(v);
            }
        }
        if(check) ans.insert(u);
    }
    // sort(ans.begin(),ans.end());
    if(ans.size()==0) cout<<-1<<endl;
    else for(auto u:ans) cout<<u<<" ";
    
}