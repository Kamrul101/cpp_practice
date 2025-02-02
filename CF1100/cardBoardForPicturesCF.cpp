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
ll n,c;
ll check(int w){
    ll x=0;
    for(int i=0;i<n;i++){
        ll y=(2*w + a[i]);
        x+=(y*y);
        if(x>c) return x;
    }
    return x;
}
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        cin>>n>>c;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        ll l=1, h=1e9;
        ll ans = -1;
        while(l<=h){
            ll mid = (l + h)/2;
            ll x = check(mid);
            if(x==c){
                ans=mid;
                break;
            }
            else if(x>c) h = mid -1;
            else l=mid+1;
        }
        cout<<ans<<endl;
    }
    
}