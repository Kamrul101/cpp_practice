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
        ll x,m;
        cin>>x>>m;
        int ans = 0;
        for(int y=1;y<=min(2LL*x,m);y++){
            ll d = x^y;
            if(x!=y && ((x%d==0) || (y%d==0))) ans++;
        }
        cout<<ans<<endl;
    }
    
}