#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
int a[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        for(int i=0;i<n;++i) cin>>a[i];
        ll cnt = 0;
        vector<ll> v;
        for(int i=0;i<n;i++) {
            ll x = a[i];
            cnt += __builtin_popcountll(x);
            while(1){
                int zeroBit = __builtin_ctzll(~x);
                ll req = (1LL<<zeroBit);
                if(k<req) break;
                v.push_back(req);
                x += req;
            }
        }
        sort(v.begin(),v.end());
        for (auto u:v) {
            if(k>=u){
                k-=u;
                cnt++;
            }
            else break;
        }
        cout<<cnt<<endl;
    }
    
}