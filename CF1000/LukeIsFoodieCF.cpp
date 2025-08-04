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
        int n,x;
        cin>>n>>x;
        for(int i=0;i<n;i++) cin>>a[i];
        vector<pair<ll,ll>>vp(n);
        for(int i=0;i<n;i++){
            vp[i]={a[i]-x,a[i]+x};
        }
        int res = 0;
        ll minL = vp[0].first;
        ll maxR = vp[0].second;
        for(int i=1;i<n;i++){
            minL = max(minL,vp[i].first);
            maxR = min(maxR,vp[i].second);
            if(minL>maxR){
                res++;
                minL = vp[i].first;
                maxR = vp[i].second;
            }
        }
        cout<<res<<endl;
        
    }
    
}