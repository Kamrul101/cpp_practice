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
        ll a,b,k;
        cin>>a>>b>>k;

        ll g = __gcd(a,b);
        if(a/g<=k && b/g<=k) cout<<1<<endl;
        else cout<<2<<endl;
    }
    
}