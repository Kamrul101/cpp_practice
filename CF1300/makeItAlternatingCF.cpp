#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 998244353
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
// int a[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    vector<ll> fact(mx);
    fact[0] = fact[1] = 1;
    for(int i=2;i<mx;i++){
        fact[i] = (i * fact[i-1])%MOD;
    }
    while(t--){
        string s;
        cin>>s;
        int n = s.size();
        ll cnt = 1;
        ll ans = 1;
        ll x=  1;
        char last = s[0];
        for(int i=1;i<n;i++){
            if(last!=s[i]){
                ans = (ans*cnt)%MOD;
                x++;
                cnt=1;
            }
            else cnt++;
            last = s[i];
        }
        ans = (ans*cnt)%MOD;
        ans = (ans*fact[n-x])%MOD;
        cout<<n-x<<" "<<ans<<endl;
    }
    
}