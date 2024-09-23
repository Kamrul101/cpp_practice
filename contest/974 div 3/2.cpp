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
        ll l=n-k+1;
        ll mx=max(1*1LL,l);
        ll a = n-mx+1;
        ll sum = (a*(mx+n))/2; 
        if(sum%2) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    
}