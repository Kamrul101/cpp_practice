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
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<ll>> v(m+1);
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                ll x;
                cin>>x;
                v[j].push_back(x);
            }
        }
        ll ans = 0;
        for(int j=1;j<=m;j++){
            ll sum = 0;
            sort(v[j].begin(),v[j].end());
            for(int i=0;i<n;i++){
                ans+=1LL*(v[j][i]*i) - sum;
                sum+=v[j][i];
            }
        }
        cout<<ans<<endl; 
        
    }
    
}