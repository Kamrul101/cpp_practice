//Number theory basic(gcd)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =21;
int a[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int g = 0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            g=__gcd(g,a[i]);
        }
        if(g==1){
            cout<<0<<endl;
            continue;
        }
        if(__gcd(g,n)==1) cout<<1<<endl;
        else if(__gcd(g,n-1)==1) cout<<2<<endl;
        else cout<<3<<endl;
    }
    
}