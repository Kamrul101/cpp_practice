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
        ll x,y,z,k;
        cin>>x>>y>>z>>k;
        ll ans = 0;
        for(int a=1;a<=x;a++){
            for(int b=1;b<=y;b++){
                if(k%(a*b)) continue;
                ll c = k/(a*b);
                if(c>z) continue;
                ll val = 1LL*(x-a+1)*(y-b+1)*(z-c+1);
                ans = max(ans,val);
            }
        }
        cout<<ans<<endl;
    }
    
}