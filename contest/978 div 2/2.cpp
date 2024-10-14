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
        ll n,k,mx = -1,sum=0;
        cin>>n>>k;
        for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            mx = max(x,mx);
            sum+=x;
        }
        cout<<max(mx,(sum+k-1)/k)<<endl;
        
    }
    
}