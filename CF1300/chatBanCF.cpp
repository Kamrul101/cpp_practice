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
        ll k,x;
        cin>>k>>x;
        ll total = k*k;
        ll l=1, h=2*k-1;
        int ans = 0;
        while(l<=h){
            ll mid = l+(h-l)/2;
            ll req = 0;
            if(mid>k){
                ll diff = mid - k;
                ll val = k-diff;
                req = total - (val*(val+1))/2;
            }
            else req = (mid*(mid-1))/2;
            if(req<x){
                ans = mid;
                l = mid+1;
            }
            else h = mid-1;
        }
        cout<<ans<<endl;
    }
    
}