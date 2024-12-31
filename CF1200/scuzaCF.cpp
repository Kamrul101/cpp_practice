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
        int n,q;
        cin>>n>>q;
        vector<ll> v(n),k(q);
        for(auto &u:v) cin>>u;
        for(auto &u:k) cin>>u;
        vector<ll> preSum(n+1,0);
        
        for(int i=1;i<=n;i++) preSum[i] = preSum[i-1]+v[i-1];
        for(int i=1;i<n;i++) {
            ll x = max(v[i],v[i-1]);
            v[i] = x;
        }
        for(int i=0;i<q;i++){
            int up = upper_bound(v.begin(),v.end(),k[i])-v.begin();
            cout<<preSum[up]<<" ";
        }
        cout<<endl;

        
    }
    
}