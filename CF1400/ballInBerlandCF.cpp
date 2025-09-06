#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
int a[mx],b[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        map<int,int>mp1,mp2;
        for(int i=0;i<k;i++){
            cin>>a[i];
            mp1[a[i]]++;
        }
        for(int i=0;i<k;i++){
            cin>>b[i];
            mp2[b[i]]++;
        }
        // ll ans=0;
        // for(int i=0;i<k;i++){
        //     ans+=1LL*(k-mp1[a[i]]-mp2[b[i]]+1);
        // }
        // cout<<ans/2<<endl;
        ll ans = (1LL * k*(k-1))/2;
        for(auto u:mp1){
            ll x = 1LL*u.second;
            ans-=x*(x-1)/2;
        }
        for(auto u:mp2){
            ll x = 1LL*u.second;
            ans-=x*(x-1)/2;
        }
        cout<<ans<<endl;
        
    }
    
}