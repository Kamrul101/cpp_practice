#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
// const int mx =2e5+123;
// int a[mx];

template<typename T> using ordered_set = tree < T, null_type, 
    less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){

        int n,m;
        cin>>n>>m;
        vector<ordered_set<int>> adj(n+1);
        for(int i=1;i<=m;i++){
            int x , y;
            cin>>x>>y;
            adj[x].insert(y);
            adj[y].insert(x); 
        }
        int k;
        cin>>k;
        while(k--){
            int x;
            cin>>x;
            if(x==1){
                int y,z;
                cin>>y>>z;
                adj[y].insert(z);
                adj[z].insert(y);
            }
            else if(x==2){
                int y,z;
                cin>>y>>z;
                adj[y].erase(z);
                adj[z].erase(y);
            }
            else{
                // sort(adj.begin(),adj.end());
                // adj.erase(adj.begin());
            }
        }
        cout<<adj.size()<<endl;
    }

}
