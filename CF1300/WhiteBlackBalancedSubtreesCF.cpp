#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

const int mx =4e4+123;
string s;
int ans;
// bool vis[mx] = {0};
vector<int> adjMat[mx];

pair<int,int> dfs(int v){
    int b=(s[v-1]=='B')?1:0;
    int w=(s[v-1]=='W')?1:0;
    for(auto u:adjMat[v]){
        auto p = dfs(u);
        b+=p.first;
        w+=p.second;
    }
    if(b==w) ans++;
    return {b,w};
}

void clean(int n){
    for(int i=1;i<n;i++){
        adjMat[i].clear();
    }
}


int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        clean(mx);
        for(int i=2;i<=n;i++){
            int x;
            cin>>x;
            adjMat[x].push_back(i);
        }
        cin>>s;
        ans = 0;
        dfs(1);
        cout<<ans<<endl;   
    }
}