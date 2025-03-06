#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e6+123;
int a[101],dp[mx];
int n,k;
int coin(int sum){
    if(sum<0) return 0;
    if(sum==0) return 1;
    if(dp[sum]!=-1) return dp[sum];
    ll res=0;
    for(int i=0;i<n;i++){
        res+=coin(sum-a[i]);
        res%=MOD;
    }
    return dp[sum] = res;
    
}
int main() {
    optimize();
    cin>>n>>k;
    mem(dp,-1);
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<coin(k)<<endl;
}