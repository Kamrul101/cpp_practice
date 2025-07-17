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
int main() {
    optimize();
    ll n,h;
    cin>>n>>h;
    for(int i=0;i<n;i++) cin>>a[i];
    ll l=0,r=n;
    while(l<=r){
        ll mid = (l+r)/2;
        vector<ll> v(mid);
        for(int i=0;i<mid;i++) v[i] = a[i];
        sort(v.rbegin(),v.rend());
        ll req = h;
        for(int i=0;i<mid;i+=2){
            req-=v[i];
        }
        if(req>=0) l = mid+1;
        else r = mid-1;

    }
    cout<<r<<endl;
    
}