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
    ll n,k;
    cin>>n>>k;
    set<ll> s;
    for(ll i=1;i*i<=n;i++){
        if(n%i==0) {
            s.insert(i);
            s.insert(n/i);
        }
    }
    if(s.size()<k) cout<<-1<<endl;
    else{
        cout<<*next(s.begin(),k-1)<<endl;
    }
    
}