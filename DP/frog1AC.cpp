#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
int n;
int a[mx],dp[mx];

int jump(int i){
    if(i==n) return 0;
    if(dp[i]!=-1) return dp[i];
    int ret1 = INT_MAX, ret2=INT_MAX;
    if(i+1<=n) ret1 = abs(a[i]-a[i+1]) + jump(i+1);
    if(i+2<=n) ret2 = abs(a[i]-a[i+2]) + jump(i+2);
    return dp[i] = min(ret1,ret2);
}

int main() {
    optimize();
    cin>>n;
    mem(dp,-1);
    for(int i=1;i<=n;i++) cin>>a[i];
    cout<<jump(1)<<endl;

}