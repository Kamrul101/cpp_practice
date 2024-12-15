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
        vector<pair<ll,int>> v1,v2,v3;
            for(int i=0;i<n;i++){
                ll x;
                cin>>x;
                v1.push_back({x,i});
            }
            for(int i=0;i<n;i++){
                ll x;
                cin>>x;
                v2.push_back({x,i});
            }
            for(int i=0;i<n;i++){
                ll x;
                cin>>x;
                v3.push_back({x,i});
            }
        
        sort(v1.rbegin(),v1.rend());
        sort(v2.rbegin(),v2.rend());
        sort(v3.rbegin(),v3.rend());
        
        ll ans=0LL;
        for(int i=0;i<min(n,10);i++){
            for(int j=0;j<min(n,10);j++){
                for(int k=0;k<min(n,10);k++){
                    if(v1[i].second != v2[j].second && v2[j].second != v3[k].second && v1[i].second!= v3[k].second){
                        ll x  = v1[i].first;
                        ll y  = v2[j].first;
                        ll z  = v3[k].first;
                        ans = max(x+y+z,ans);
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
    
}