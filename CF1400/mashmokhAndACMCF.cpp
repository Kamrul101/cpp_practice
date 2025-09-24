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
int n,k;

ll dp[2005][2005];

ll solve(int len, int start){
    if(len==0) return 1;
    if(dp[len][start]!=-1) return dp[len][start];

    ll ans = 0;
    for(int i=start;i<=n;i+=start){
        ans+=solve(len-1,i);
        ans%=MOD;
    }
    return dp[len][start] = ans%MOD;
}

int main() {
    optimize();
    cin>>n>>k;
    mem(dp,-1);
    cout<<solve(k,1);
    
}