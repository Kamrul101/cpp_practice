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
       int n;
       cin>>n;
       vector<ll> v(n);
       for(auto &u :v) cin>>u;
       ll ans = v[0];
       ll mn = min(1LL*0,v[0]);
       ll mx = v[0];

       for(int i=1;i<n;i++){
            if(abs(v[i]%2)==abs(v[i-1]%2)){
                mn = 0;
                mx = 0;
            }
            mx+=v[i];
            ans = max(ans,mx-mn);
            mn = min(mn,mx);
        } 
        cout<<ans<<endl;
    }
    
}