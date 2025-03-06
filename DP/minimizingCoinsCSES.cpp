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
int count(int target)
{
    if(target==0) return 0;
    if(dp[target]!= -1) return dp[target];
    int coins=1e9;
    for(int j=0;j<n;j++){
        if(target>=a[j]){
            coins=min(coins, count(target - a[j]) + 1);
        }
    }
    return dp[target] = coins;
}
int main() {
    optimize();
    cin>>n>>k;
    mem(dp,-1);
    for(int i=0;i<n;i++) cin>>a[i];
    int x = count(k);
    cout<<(x<1e9?x:-1)<<endl;
}