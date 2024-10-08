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
        ll a,b,x,y,n;
        cin>>a>>b>>x>>y>>n;

        ll p1=0,p2=0;

        ll ma,mb;
        ma = min(n,a-x);
        mb = min(n-ma,b-y);

        p1 = (a-ma)*(b-mb);

        mb = min(n,b-y);
        ma = min(n-mb,a-x);

        
        p2 = (a-ma)*(b-mb);

        cout<<min(p1,p2)<<endl;
    }
    
}