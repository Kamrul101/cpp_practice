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
        int n,k;
        cin>>n>>k;
        int ans = n;
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
                if(i<=k) ans = min(ans,n/i);
                if(n/i<=k) ans = min(ans,i);
            }
        }
        cout<<ans<<endl;
        
    }
    
}