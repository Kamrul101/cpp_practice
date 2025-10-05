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
        ll k;
        cin>>k;

        ll l = 1, h = 2e18, ans = 2e18;
        while(l<=h){
            ll mid = (l+h)>>1;
            ll n = mid - (ll) sqrtl(mid);
            if(n<k) l = mid +1;
            else{
                ans =  mid;
                h = mid -1;
            }
        }
        cout<<ans<<endl;
        
    }
    
}