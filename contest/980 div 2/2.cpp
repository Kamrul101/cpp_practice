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
       vector<ll> v(n);
       for(auto &u: v) cin>>u;

       sort(v.begin(),v.end());


       ll ans = k,sub=0;
       for(int i=0;i<n;i++){
            v[i]-=sub;
            k-=min(k,(n-i)*v[i]);
            if(k==0) break;
            else ans++;
            sub+=v[i];
             
       }
        cout<<ans<<endl;
    }
    
}