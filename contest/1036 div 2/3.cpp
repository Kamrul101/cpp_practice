#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
// int a[mx];
int lcm(int a, int b) {
  return a / __gcd(a, b) * b;
}
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        int x = 1;
        for(int i=0;i<n-1;i++) {
            int g = __gcd(a[i+1], a[i]);
            x = lcm(x,a[i]/g);
        }
        cout<<x<<endl;
        
    }
    
}