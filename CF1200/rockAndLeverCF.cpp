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
        map<int,int> mp;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            int k = __builtin_clz(x);
            mp[31-k]++;
        }
        ll ans = 0;
        for(auto u:mp){
            ll x = 1LL*u.second;
            ans+= (x*(x-1))/2;
        }
        cout<<ans<<endl;
        
    }
    
}