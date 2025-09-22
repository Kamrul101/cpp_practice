#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =1e5+123;
int a[mx],b[mx];
ll dp[2][mx];
int n;
ll solve(int idx, int prev){
    if(idx>=n) return 0;
    if(dp[prev][idx]!=-1) return dp[prev][idx];

    ll res = 0;

    if(prev==0){
        res = max(res,b[idx]+solve(idx+1,1));
        res = max(res,solve(idx+1,0));
    }
    if(prev==1){
        res = max(res,a[idx]+solve(idx+1,0));
        res = max(res,solve(idx+1,1));
    }
    return dp[prev][idx] = res;
}
int main() {
    optimize();
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    mem(dp,-1);
    ll ans = max(solve(0,0),solve(0,1));
    cout<<ans<<endl;
    
}