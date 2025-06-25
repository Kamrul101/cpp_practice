#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =5005;
ll a[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        ll ans = 0;
        for (int k=2;k<n;k++){
            ll req;
            if(k==n-1) req = a[n-1];
            else req = max(a[n-1]-a[k],a[k]);
            for(int i=0;i<k-1;i++) {
                int l = i+1, h = k-1;
                int check = k;
                while(l<=h){
                    int mid =(l+h)/2;
                    if(a[i]+a[mid]>req) {
                        check = mid;
                        h = mid-1;
                    }
                    else l = mid+1;
                }
                ans+=(k-check);
            }
        }
        cout<<ans<<endl;
        
    }
    
}