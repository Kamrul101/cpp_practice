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
    ll t;
    cin>>t;
    for(ll i=1;i<=t;i++){
        ll totalPos = (i*i)*((i*i)-1)/2;
        ll totalAttack = 4 * (i-1) * (i-2);
        cout<<totalPos-totalAttack<<endl;
    }
    
}