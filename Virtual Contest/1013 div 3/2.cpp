#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx = 2e5+12;
ll a[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        ll n,x;
        cin>>n>>x;
        vector<ll> v1,v2;
        for(int i=0;i<n;i++){
            ll y;
            cin>>y;
            if(y>=x) v1.push_back(y);
            else v2.push_back(y);
        }
        sort(v2.rbegin(),v2.rend());
        ll ans = v1.size();
        int p = v2.size();
        int cnt=0;
        for(int i=0;i<p;i++){
            cnt++;
            ll mn = v2[i]*cnt;
            if(mn>=x){
                ans++;
                cnt=0;
            }
        }
        cout<<ans<<endl;

        
    }
    
}