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
        ll x,y,k;
        cin>>x>>y>>k;

        while(k>0 && x!=1){
            ll nxt = (x/y + 1) * y - x;
            nxt = max(1LL,nxt);
            nxt = min(nxt,k);
            x+=nxt;
            k-=nxt;
            while(x%y==0) x/=y;
        }
        cout<<x + k%(y-1)<<endl; 
        
    }
    
}