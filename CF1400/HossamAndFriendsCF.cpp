#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
int a[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        // // vector<int> v(n+1,n);
        // for(int i=1;i<=n;i++) a[i] = n;
        // for(int i=0;i<m;i++){
        //     int x,y;
        //     cin>>x>>y;
        //     // x--,y--;
        //     if(x>y) swap(x,y);
        //     a[x] = min(a[x],y-1);
        // }
        // ll ans = n;
        // for(int i=n-1;i>0;i--){
        //     a[i] = min(a[i],a[i+1]);
        // }
        // for(int i=0;i<n;i++) ans+=(a[i]-i);
        // cout<<ans<<endl;
        vector<int> prev(n+3,-1);
        for(int i=0;i<m;i++){
            int x,y;
            cin>>x>>y;
            if(x>y) swap(x,y);
            prev[y] = max(prev[y],x);
        }
        // for(int i=0;i<=n;i++) cout<<prev[i]<<" ";
        // cout<<endl;
        int last = 1;
        ll ans = 0;
        for(int i=1;i<=n;i++){
            last = max(last,prev[i]+1);
            ans+=(i-last+1);
            // cout<<ans<<" ";
        }
        cout<<ans<<endl;
    }
    
}