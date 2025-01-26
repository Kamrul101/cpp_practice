#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =5e5+123;
ll a[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        for(ll i=1;i<=n;i++) cin>>a[i];
        bool ans = true;
        for(ll i=1;i<=n;i++){
            if(a[i]>2*(n-i) && a[i]>2*(i-1)){
                continue;
            }
            else{
                cout<<"NO"<<endl;
                ans = false;
                break;
            }
        }
        if(ans) cout<<"YES"<<endl;
        
    }
    
}