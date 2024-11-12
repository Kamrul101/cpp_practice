#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
ll a[mx];
ll preSum[mx]={0};
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        for(int i=1;i<=n;i++) preSum[i]=preSum[i-1]+a[i-1];
        ll ans=0;
        for(int i=0;i<=k;i++){
            int l = 2*i, r = n - (k-i);
            ans  = max(ans,preSum[r]-preSum[l]);
        }
        cout<<ans<<endl;
    }
    
}