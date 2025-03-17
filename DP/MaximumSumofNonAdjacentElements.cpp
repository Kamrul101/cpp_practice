#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

const int mx =2e5+123;
int a[mx],dp[500];
int maxSum(int idx, vector<int> &v){
    if(idx==0) return v[idx];
    if(idx<0) return 0;
    if(dp[idx]!=-1) return dp[idx];
    int pick = v[idx] + maxSum(idx-2,v);
    int notPick = 0 + maxSum(idx-1,v);
    return dp[idx]=max(pick,notPick);
}
int main() {
    optimize();
    vector<int> v ={2,1,4,9};
    mem(dp,-1);
    cout<<maxSum(3,v)<<endl;
    
}