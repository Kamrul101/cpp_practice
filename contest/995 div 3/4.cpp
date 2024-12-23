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
        ll n,x,y;
        cin>>n>>x>>y;
        vector<ll> v(n);
        ll sum = 0;
        for(ll i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i]; 
        } 
        ll ans = 0;
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
            ll right=-1,left=-1;
            ll l=i+1,r=n-1;
            while(l<=r){
                ll mid = l+(r-l)/2;
                ll cur = sum -v[i] - v[mid];
                if(cur<= y){
                    left = mid;
                    r = mid -1;
                }
                else l = mid+1;

            }
            l=i+1,r=n-1;
            while(l<=r){
                ll mid = l+(r-l)/2;
                ll cur = sum -v[i] - v[mid];
                if(cur>=x){
                    right = mid;
                    l = mid+1;
                }
                else r = mid -1;

            }
            if(left !=-1 && right !=-1){
                ans+=(right-left+1);
            }
        }
        cout<<ans<<endl;
    }
    
}