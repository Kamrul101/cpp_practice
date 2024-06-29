#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
const int mx = 2e5 + 123;
int a[mx],n;

bool cal (ll val){
    ll sum  =val;
    for(int i=1;i<=n;i++) {
        sum+=a[i];
        if(sum<=0) return false;
    }
    return true;
}

int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--){
        
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        ll l=0,h=1e10+123;
        ll ans=0;
        while(l<=h){
            ll mid = (l+h)/2;
            
            if(cal(mid)){
                ans = mid;
                h = mid -1;
            }
            else  l=mid+1;
        }
        cout<<ans<<endl;
    }
    
}