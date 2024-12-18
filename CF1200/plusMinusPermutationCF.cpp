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
        ll n,x,y;
        cin>>n>>x>>y;
        ll lcm = (x*y)/__gcd(x,y);
        ll cnt = n/lcm;
        ll cntX = n/x;
        ll cntY = n/y;
        
        cntX-= cnt;
        cntY-= cnt;

        ll sumY = (cntY*(cntY+1))/2;
        ll sumX = n*(n+1)/2;
        ll z = n-cntX;
        sumX-= (z*(z+1))/2;
        cout<<sumX-sumY<<endl;
        
        
    }
    
}