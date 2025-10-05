#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx = 2e5+123;
ll a[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        for(int i=0;i<n;i++) cin>>a[i];

        map<ll,ll> mp;

        for(int i=0;i<n;i++){
            ll temp  = (1LL *(i+1) * (n-i)) -1;
            mp[temp]++;
            if(i>0){
                ll temp2 = 1LL*(n-i)*i;
                mp[temp2] += (a[i]-a[i-1]-1);
            }
        }
        while(q--){
            ll k;
            cin>>k;
            if(mp.find(k)!=mp.end()) cout<<mp[k]<<" ";
            else cout<<0<<" ";
        }
        cout<<endl;
    }
    
}