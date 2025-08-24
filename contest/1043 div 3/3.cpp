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
    
    vector<ll> pow3(30);
    pow3[0] = 1LL;
    for(int i=1;i<30;i++){
        pow3[i] = 1LL*pow3[i-1]*3;
    }
    while(t--){
        ll n;
        cin>>n;
        ll ans = 0;
        for(int i=30;i>=0;i--){
            ll num = pow3[i];
            ll item = n/num;
            if(item==0) continue;
            ll cost = pow3[i+1] + (1LL* i * pow3[i-1]);
            ans+=cost*item;
            n-=num*item;
        }
        cout<<ans<<endl;
    }
    
}