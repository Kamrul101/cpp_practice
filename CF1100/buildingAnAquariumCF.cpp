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
ll check(ll n,ll h){
    ll req = 0;
    for(int i=0;i<n;i++){
        if((h-a[i])>0) req+=(h-a[i]);
    }
    return req;
}

int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        ll n,x;
        cin>>n>>x;
        for(int i=0;i<n;i++) cin>>a[i];
        ll l=0,h=INT_MAX;
        while(l<h){
            ll mid = l + (h-l+1)/2;
            if(check(n,mid)<=x){
                l = mid;
            }
            else h= mid - 1;
        }
        cout<<l<<endl;
        
    }
    
}