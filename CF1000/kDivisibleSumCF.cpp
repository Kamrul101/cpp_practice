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
        ll x =  (n+k-1)/k;
        x*=k;
        ll ans = (x+n-1)/n;
        cout<<ans<<endl;

    }
}