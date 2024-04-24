#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
const int mx = 2e5+123;
int a[mx];
ll preSum[mx];


int main() {
    optimize();
    int n,t;
    cin>>n>>t;
    
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        preSum[i] += preSum[i-1]+a[i];
    }
    map<ll,int> cnt;
    cnt[0]=1;
    ll ans=0;
    for(int i=1;i<=n;i++){
        ll x = preSum[i]-t;
        ans+=cnt[x];
        cnt[preSum[i]]++;
    }
    cout<<ans<<endl;
}
