#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =1e5+123;
int a[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        int g = __gcd(x,y);
        for(int i=0;i<n;i++) {
            cin>>a[i];
            a[i]%=g;
        }
        sort(a,a+n);
        int ans  = a[n-1]-a[0];
        for(int i=0;i<n-1;i++){
            ans = min(ans, a[i]-a[i+1]+g);
        }
        cout<<ans<<endl;
        


        
    }
    
}