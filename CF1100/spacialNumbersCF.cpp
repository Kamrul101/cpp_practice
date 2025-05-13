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
        ll n,k;
        cin>>n>>k;
        ll ans = 0;
        ll x = 1;
        for(ll i=0;i<31;i++){
            if(k& (1<<i)){
                ans = (ans+ x)%MOD;
            }
            x*=n;
            x%=MOD;
        }
        cout<<ans<<endl;
        
    }
    
}