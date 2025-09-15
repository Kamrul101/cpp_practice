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
ll lcm(ll x, ll y){
    return (x*y)/__gcd(x,y);
}
int main() {
    optimize();

    ll x;
    cin>>x;
    ll ans=1;
    for(ll i=1;i*i<=x;i++){
        if(x%i==0){
            if(lcm(i,x/i)==x) ans = i;
        }
    }
    cout<<ans<<" "<<x/ans<<endl;

    
}