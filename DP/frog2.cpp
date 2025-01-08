#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
int a[mx],dp[mx];
int n,k;

int jump(int i){
    if(i==n) return 0;
    if(dp[i]!=-1) return dp[i];
    int ret = INT_MAX;
    for(int j=1;j<=k;j++){
        if(i+j<=n) ret = min(ret, abs(a[i]-a[i+j])+jump(i+j));
    }
    return dp[i] = ret;
}

int main() {
    optimize();
    cin>>n>>k;
    for(int i=1;i<=n;i++) cin>>a[i];
    mem(dp,-1);
    cout<<jump(1)<<endl;
    
}