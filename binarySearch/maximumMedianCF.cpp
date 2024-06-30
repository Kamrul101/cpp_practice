#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
const int mx = 1000000+123;
ll a[mx],n,k;

bool cal (ll val){
    ll x = n/2,cnt=0;
    for(int i=x;i<n;i++){
        cnt+=(max(val -a[i],0LL));
    }
    if(cnt<=k) return true;
    else return false;
}

int main()
{
    optimize();
    
        
        cin>>n>>k;
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        ll l=1,h=1e10;
        ll ans=0;
        while(l<=h){
            ll mid = (l+h)/2;
            
            if(cal(mid)){
                ans = mid;
                l=mid+1;
                
            }
            else  h = mid-1;
        }
        cout<<ans<<endl;
    
    
}