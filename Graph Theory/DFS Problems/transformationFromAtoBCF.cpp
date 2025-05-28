#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

// const int mx =1e5+123;
// bool vis[mx] = {0};
// vector<int> adjMat[mx];
map<int,int> parent;

int a,b;
bool is_possible = false;

void dfs(ll n, int p){
    if(n>b) return;
    parent[n] = p;
    if(n==b){
        is_possible = true;
        return;
    }
    dfs(2*n, n);
    dfs(10*n+1,n);
}



int main() {
    optimize();
    cin>>a>>b;
    dfs(a,0);
    if(is_possible){
        cout<<"YES"<<endl;
        vector<int> path;
        int dest = b;
        while(1){
            path.push_back(dest);
            dest = parent[dest];
            if(dest==a) break;
        }
        path.push_back(dest);
        reverse(path.begin(),path.end());
        cout<<path.size()<<endl;
        for(auto u:path) cout<<u<<" ";
        cout<<endl;

    }
    else cout<<"NO"<<endl;

      
}