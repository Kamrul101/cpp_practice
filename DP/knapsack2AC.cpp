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

ll n,weight,w[105],v[105];
ll dp[105][100005];

ll solve(int idx, ll curV){
    if(curV==0) return 0;
    if(idx==n) return (ll)1000000000000;

    if(dp[idx][curV]!=-1) return dp[idx][curV];
    ll res = (ll)1000000000000;

    if(v[idx]<= curV){
        ll take = w[idx] + solve(idx+1, curV-v[idx]);
        res = min(res,take);
    }

    ll notTake = solve(idx+1,curV);
    res = min(res,notTake);

    return dp[idx][curV]=res;
}

int main() {
    optimize();
    cin>>n>>weight;

    for(int i=0;i<n;i++) cin>>w[i]>>v[i];
    
    ll ans  = 0;
    mem(dp,-1);
    for(ll value=0;value<=100000;value++){
        ll val = solve(0,value);

        if(val<=weight){
            ans = max(ans,value);
        }
    }

    cout<<ans<<endl;
}