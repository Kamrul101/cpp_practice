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
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++) cin>>a[i];
    map<ll,ll> mp;
    deque<ll> dq;
    ll ans=0;
    for(int i=0;i<n;i++){
        dq.push_back(a[i]);
        mp[a[i]]++;
        while (mp.size()>k){
            ll x = dq.front();
            dq.pop_front();
            mp[x]--;
            if(mp[x]==0) mp.erase(x);
        }
        ans+=dq.size();
    }
    cout<<ans<<endl;
}