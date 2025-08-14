#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
// int a[mx];
vector<int> adj[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n+1;i++) adj[i].clear();
        for(int i=0;i<n-1;i++){
            int x,y;
            cin>>x>>y;
            x--,y--;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        if(n<=2){
            cout<<0<<endl;
            continue;
        }
        int ans = 0;
        for(int i=0;i<n;i++){
            if(adj[i].size()==1) ans++;
        }
        int mx = 0;
        for(int i=0;i<n;i++){
            int cnt=0;
            for(auto u:adj[i]){
                if((int)adj[u].size()==1) cnt++;
            }
            mx = max(mx,cnt);
        }
        cout<<ans-mx<<endl;
    }
    
}