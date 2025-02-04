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
        ll n,x;
        cin>>n>>x;
        ll s=0;
        for(int i=0;i<3;i++){
            for(ll j=0;j<n;j++) cin>>a[j];
            for(ll j=0;j<n;j++){
                if((x|a[j]) != x) break;
                s|=a[j];
            }
        }
        if(s==x) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    
}