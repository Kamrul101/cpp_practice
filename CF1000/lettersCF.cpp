#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
ll a[mx],b[mx];
ll preSum[mx]={0};
int main() {
    optimize();
        int n,m;
        cin>>n>>m; 
        for(int i=1;i<=n;i++) cin>>a[i];
        for(int i=1;i<=m;i++) cin>>b[i];
        for(int i=1;i<=n;i++){
            preSum[i] = preSum[i-1]+a[i];
        }
        for(int i=1;i<=m;i++){
            ll ans = 0;
            ll l=1,h=n;
            while(l<=h){
                ll mid = (l + h)/2;
                if(preSum[mid]>=b[i]){
                    ans = mid;
                    h = mid-1;
                }
                else l = mid +1;
            }
            ll x = preSum[ans];
            ll y = x-b[i];
            cout<<ans<<" "<<a[ans]-y<<endl;
        }
    

    
    
}