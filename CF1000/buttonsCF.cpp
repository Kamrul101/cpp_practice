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
    ll n;
    cin>>n;
    ll ans = 0;
    // for(int i=1;i<=n;i++){
    //     ans+= i* (n-i);
    // }
    // cout<<ans+n<<endl;
    //(n-1)+2*(n-2)+3*(n-3)+...+n*(n-n) = (n*(n+1)*(n-1))/6
    ans+=(n*(n-1)*(n+1)/6);
   
    cout<<ans+n<<endl;
    
}