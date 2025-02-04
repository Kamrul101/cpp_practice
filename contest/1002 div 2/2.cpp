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
        int n, k;
        cin>>n>>k;
        for (int i=1;i<=n;i++) cin>>a[i];
        if (n==k) {
            int ans =-1;
            for(int i=2;i<=n;i+=2) {
                if(a[i]!=i/2) {
                    ans = i/2;
                    break;
                }
            }
            if(ans==-1) ans = n/2+1;
            cout<<ans<<endl;
        }
        else {
            int check = -1,cnt=0;
            for (int i=2;i<=n-k+2;i++) {
                if(a[i]==1) {
                    cnt++;
                }
            }
            if(cnt==n-k+1){
                cout<<2<<endl;
            }
            else cout<<1<<endl;
        }
    }
    
}