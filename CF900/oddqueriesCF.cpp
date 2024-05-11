#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
const int mx = 2e5+123;
ll a[mx];
ll preSum[mx];


int main() {
    optimize();
    int t;
    cin>>t;
    
    
    while(t--){
        ll n,q;
        cin>>n>>q;
        for(int i=1;i<=n;i++) {
            cin>>a[i];
            preSum[i] = preSum[i-1]+a[i];
        }
        while(q--){
            ll l,r,k;
            cin>>l>>r>>k;
            ll ans = preSum[n] - (preSum[r]-preSum[l-1])+ k *(r-l+1);
            if(ans%2==1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        
    }
}
