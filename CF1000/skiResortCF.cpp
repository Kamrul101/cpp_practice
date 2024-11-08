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
    int t;
    cin>>t;
    while(t--){
        int n,k,q;
        cin>>n>>k>>q;
        for(int i=0;i<n;i++) cin>>a[i];
        ll len = 0,ans = 0;
        for(int i=0;i<n;i++){
            if(a[i]<=q){
                len++;
            }
            else{
                if(len>=k){
                    ll x = len-k+1;
                    ans+=(x*(x+1))/2;
                }
                len=0;
            }
        }
        if(len>=k){
            ll x = len-k+1;
            ans+=(x*(x+1))/2;
        }
        cout<<ans<<endl;
        
    }
    
}