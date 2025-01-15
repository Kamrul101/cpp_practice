#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
ll a[mx];
int main() {
    optimize();
    ll n,l;
    cin>>n>>l;
    ll mx = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=1;i<n;i++){
        mx = max(mx,a[i]-a[i-1]);
    }
    double x = a[0]*1.0 - 0;
    double y = l*1.0 - a[n-1]*1.0;
    double ans = mx*1.00;
    ans = max(ans/2,max(x,y));
    cout<<fixed<<setprecision(10)<<ans<<endl;
}