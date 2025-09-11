#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =4e5+123;
ll a[mx];
int main() {
    optimize();
    int n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    ll g = 0;
    for(int i=0;i<n;i++) g = __gcd(g,a[i]);
    set<ll> s;
    for(ll i=1;i*i<=g;i++){
        if(g%i==0){
            s.insert(i);
            s.insert(g/i);
        }
    }
    cout<<s.size()<<endl;
    
}