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
        ll n;
        cin>>n;
        int x = __builtin_clzll(n);
        x = 64-x;
        ll ans = 0 , v=1;
        for(int i=0;i<x;i++){
            ans+=(n/v);
            v*=2;
        }
        cout<<ans<<endl;
        
    }
    
}