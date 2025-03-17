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
        int n;
        cin>>n;
        vector<pair<ll,ll>> v(n);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            ll mx = 0;
            for(int j=0;j<x;j++){
                ll k;
                cin>>k;
                mx = max(k-j+1,mx);
            }
            v[i]={mx,x};
        }
        sort(v.begin(),v.end());
        ll l = 0,h=1e9+5,ans=INT_MAX;
        while(l<=h){
            ll mid = (l+h)/2;
            bool check = true;
            ll cur = mid;
            for(int i=0;i<n;i++){
                if(cur<v[i].first){
                    check = false;
                    break;
                }
                cur+=v[i].second;
            }
            if(check){
                ans = mid;
                h = mid-1;
            }
            else l = mid+1;
        }
        cout<<ans<<endl;
    }
    
}