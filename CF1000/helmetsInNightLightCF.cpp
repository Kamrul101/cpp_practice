#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
int a[mx],b[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n,p;
        cin>>n>>p;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        vector<pair<int,int>> vp;
        for(int i=0;i<n;i++){
            vp.push_back({b[i],a[i]});
        }
        sort(vp.begin(),vp.end());
        ll ans = p;
        ll tot = n-1;
        for(int i=0;i<n;i++){
            if(!tot) break;
            if(vp[i].first>p){
                ans+= tot*p;
                break;
            }
            ll need = min(tot,vp[i].second*1LL);
            ans+=(vp[i].first*need);
            tot-=need;
        }
        cout<<ans<<endl;
        
    }
    
}