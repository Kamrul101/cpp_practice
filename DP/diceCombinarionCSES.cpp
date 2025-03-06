#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =1e6+5;
// int a[mx];
int n,dp[mx];
int dice(int sum){
    if(sum==0) return 1;
    int res=0;
    if(dp[sum]>0) return dp[sum];
    for(int i=1;i<=6;i++){
        if(sum>=i) {
            res+=dice(sum-i);
            res%=MOD;
        }
    }
    return dp[sum]=res;
}
int main() {
    optimize();
    cin>>n;
    int ans = dice(n);
    cout<<ans<<endl;
}